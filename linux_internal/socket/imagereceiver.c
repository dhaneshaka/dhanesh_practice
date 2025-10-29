#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <netinet/in.h>
#define PORT 8080
#define MAX 1024

int main() {
    int sockfd, connfd;
    struct sockaddr_in servaddr, cli;
    socklen_t len;
    char buffer[MAX];

    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    servaddr.sin_family = AF_INET;
    servaddr.sin_addr.s_addr = INADDR_ANY;
    servaddr.sin_port = htons(PORT);

    bind(sockfd, (struct sockaddr*)&servaddr, sizeof(servaddr));
    listen(sockfd, 5);
    printf("Server listening...\n");

    len = sizeof(cli);
    connfd = accept(sockfd, (struct sockaddr*)&cli, &len);
    printf("Client connected\n");

    // Receive file size
    long filesize;
    read(connfd, &filesize, sizeof(filesize));
    printf("Receiving image of size %ld bytes\n", filesize);

    FILE *fp = fopen("received.jpg", "wb");
    if (fp == NULL) {
        perror("File create failed");
        close(connfd);
        close(sockfd);
        exit(EXIT_FAILURE);
    }

    long received = 0;
    while (received < filesize) {
        int bytes = read(connfd, buffer, MAX);
        fwrite(buffer, 1, bytes, fp);
        received += bytes;
    }

    printf("Image received and saved as 'received.jpg'\n");
    fclose(fp);
    close(connfd);
    close(sockfd);
    return 0;
}
