#include <stdio.h>
#include <signal.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

void signs (int sig)

{


time_t tiempo1;

char* tiempo2;

	tiempo1 = time(NULL);

	tiempo2=ctime(&tiempo1);

printf("señal recibida SIGUSR1: %s", tiempo2);


}

int main()
{
	while(1){
		printf("Programa hora ejecutandose . PID=%d\n", getpid());

		while(1){
		printf("Listo para recibir la señal SIGUSR1\n");

		signal(SIGUSR1,signs);

		sleep(25);
		}
	}
}