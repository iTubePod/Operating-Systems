#include <stdio.h>
#include <pthread.h>

int a = 1;
void *print_message(void *mes)
{
	char *message;
	message=(char *)mes;
	printf("%s\n", message);
	a++;
	printf("incrementing a inside thread... a=%d\n",a);
}

int main()
{
	printf("a=%d\n",a);
	pthread_t tid;
	char *message="Received content in thread";
	pthread_create(&tid, NULL, print_message, (void *)message);
	printf("Creando thread con tid %ld\n", tid);
	pthread_join(tid, NULL);
	printf("a=%d\n",a);
	return 0;
}

/*
gcc threads.c -o thr -lpthread
*/