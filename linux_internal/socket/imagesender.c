#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#define PORT 8080
#define MAX 1024

int main() {
    int sockfd;
    struct sockaddr_in servaddr;

    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    servaddr.sin_family = AF_INET;
    servaddr.sin_port = htons(PORT);
    servaddr.sin_addr.s_addr = inet_addr("127.0.0.1");

    connect(sockfd, (struct sockaddr*)&servaddr, sizeof(servaddr));
    printf("Connected to server\n");

    FILE *fp = fopen("image.jpg", "rb");
    if (fp == NULL) {
        perror("File open failed");
        close(sockfd);
        exit(EXIT_FAILURE);
    }

    // Get file size
    fseek(fp, 0, SEEK_END);
    long filesize = ftell(fp);
    rewind(fp);

    // Send file size
    write(sockfd, &filesize, sizeof(filesize));

    // Send file content
    char buffer[MAX];
    size_t bytes;
    while ((bytes = fread(buffer, 1, MAX, fp)) > 0) {
        write(sockfd, buffer, bytes);
    }

    printf("Image sent successfully\n");
    fclose(fp);
    close(sockfd);
    return 0;
}
