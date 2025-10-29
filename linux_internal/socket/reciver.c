#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

#define PORT 8080
#define MAX 1024
#define SA struct sockaddr

int main()
{
    int sockfd, connfd, len;
    struct sockaddr_in servaddr, cli;
    char buffer[MAX];
    FILE *fp;

    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd == -1) { perror("Socket creation failed"); exit(1); }
    printf("Socket created.\n");

    bzero(&servaddr, sizeof(servaddr));
    servaddr.sin_family = AF_INET;
    servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
    servaddr.sin_port = htons(PORT);

    if (bind(sockfd, (SA *)&servaddr, sizeof(servaddr)) != 0) { perror("Bind failed"); exit(1); }
    if (listen(sockfd, 5) != 0) { perror("Listen failed"); exit(1); }
    printf("Server listening...\n");

    len = sizeof(cli);
    connfd = accept(sockfd, (SA *)&cli, &len);
    if (connfd < 0) { perror("Accept failed"); exit(1); }
    printf("Client connected.\n");

    fp = fopen("received_from_client.txt", "wb");
    if (fp == NULL) { perror("Cannot open file"); exit(1); }

    int n;
    while ((n = read(connfd, buffer, MAX)) > 0) {
        fwrite(buffer, 1, n, fp);
    }

    printf("File received successfully.\n");
    fclose(fp);
    close(connfd);
    close(sockfd);
    return 0;
}
