include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include "MQTTClient.h"

// ====== MQTT Configuration ======
#define ADDRESS     "tcp://dev.rightech.io:1883"
#define CLIENTID    "mqtt-chichu"
#define TOPIC       "base/relay/led1"
#define QOS         1
#define TIMEOUT     10000L

// ====== LED Path ======
#define LED_PATH    "/sys/class/leds/led3/brightness"

// ====== LED helper functions ======
void led_on(int fd) {
    lseek(fd, 0, SEEK_SET);   // Reset file pointer
    if (write(fd, "0", 1) < 0) perror("LED write failed");
}

void led_off(int fd) {
    lseek(fd, 0, SEEK_SET);   // Reset file pointer
    if (write(fd, "1", 1) < 0) perror("LED write failed");
}

void led_blink(int fd, int times, int delay_ms) {
    for (int i = 0; i < times; i++) {
        led_on(fd);
        usleep(delay_ms * 1000);
        led_off(fd);
        usleep(delay_ms * 1000);
    }
}

// ====== MQTT callback ======
int messageArrived(void *context, char *topicName, int topicLen, MQTTClient_message *message)
{
    (void)topicLen;
    int *fd_ptr = (int *)context;
    int fd = *fd_ptr;

    char payload[128];
    memset(payload, 0, sizeof(payload));
    memcpy(payload, message->payload, (size_t)message->payloadlen);
    payload[message->payloadlen] = '\0';

    printf("\n📩 Received message on [%s]: %s\n", topicName, payload);

    if (strcasecmp(payload, "on") == 0) {
        printf("Turning LED ON...\n");
        led_on(fd);

    } else if (strcasecmp(payload, "off") == 0) {
        printf("Turning LED OFF...\n");
        led_off(fd);

    } else if (strcasecmp(payload, "blink") == 0) {
        printf("Blinking LED 10 times...\n");
        led_blink(fd, 10, 500);

    } else {
        printf("⚠️ Unknown command: %s\n", payload);
    }

    MQTTClient_freeMessage(&message);
    MQTTClient_free(topicName);
    return 1;
}

int main(void)
{
    int fd = open(LED_PATH, O_WRONLY);
    if (fd < 0) {
        perror("Failed to open LED brightness file");
        return 1;
    }

    printf("💡 MQTT LED Controller starting...\n");
    printf("Broker: %s\nTopic : %s\n", ADDRESS, TOPIC);

    MQTTClient client;
    MQTTClient_connectOptions conn_opts = MQTTClient_connectOptions_initializer;

    MQTTClient_create(&client, ADDRESS, CLIENTID,
                      MQTTCLIENT_PERSISTENCE_NONE, NULL);

    MQTTClient_setCallbacks(client, &fd, NULL, messageArrived, NULL);

    conn_opts.keepAliveInterval = 20;
    conn_opts.cleansession = 1;

    if (MQTTClient_connect(client, &conn_opts) != MQTTCLIENT_SUCCESS) {
        fprintf(stderr, "❌ Failed to connect to MQTT broker\n");
        close(fd);
        return 1;
    }

    printf("✅ Connected to MQTT broker\nSubscribing to topic: %s\n", TOPIC);
    MQTTClient_subscribe(client, TOPIC, QOS);

    while (1) {
        sleep(1);
    }

    MQTTClient_disconnect(client, TIMEOUT);
    MQTTClient_destroy(&client);
    close(fd);
    return 0;
}

