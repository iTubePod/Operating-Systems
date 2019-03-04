#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int fd[2];
    pipe(fd);
    int child_id = fork();
    if(child_id>0)
    {
        close(fd[0]);
        char textoAEnviar[]="mensaje";
        write(fd[1], textoAEnviar, strlen(textoAEnviar)+1);
        close(fd[1]);
        wait(NULL);
        printf("El hijo ya murio \n");
    }
    else{
        close(fd[1]);
        char textoALeer[100];
        read(fd[0], textoALeer, 100);
        printf("El texto leido fue: %s\n", textoALeer);
        close(fd[1]);
        exit(0);
    }
}