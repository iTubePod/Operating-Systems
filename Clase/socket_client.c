#include <stdio.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

int main()
{
    int sock = socket(AF_INET, SOCK_STREAM,0);
    struct sockaddr_in address;
    int addrlen = sizeof(address);
    address.sin_family = AF_INET;
    inet_pton(AF_INET, "127.0.0.1", &address.sin_addr);
    address.sin_port=htons(1024);
    connect(sock, (struct sockaddr *)&address, addrlen);
    char enviar[100] = "Texto a Enviar";
    send(sock, enviar, strlen(enviar)+1,0);
    close(sock);
    return 0;
}