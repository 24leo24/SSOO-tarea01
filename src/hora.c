#include <stdio.h>
#include <signal.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
// Se incluyen las librerias correspondientes para el buen funcionamiento del programa

void signs (int sig) //void que se ejecutara cuando se recepcione la señal SIGUSR1

{


time_t tiempo1; // se crea variable de tipo time_t con el nombre tiempo1 en donde podra posteriormente devolera fecha y hora 

char* tiempo2; // se crea variable de tipo char* con el nombre tiempo2 que sera el puntero de tomara los valores

	tiempo1 = time(NULL);// se dice que tiempo1=time(NULL) para asignar a tiempo1 la hora actual 

	tiempo2=ctime(&tiempo1); //como tiempo2 es una variable de tipo char se le puede iguala a ctime(&tiempo1) que tomara la fecha y la hora

printf("señal recibida SIGUSR1: %s", tiempo2); // se mostrara un breve mensaje acompañado de la fecha y hora


}

int main() //main que se mostrara al ejecutar el programa 
{
	while(1){ 
		printf("Programa hora ejecutandose . PID=%d\n", getpid()); // se mostrara un breve mensaje aconpañado del pid solicitado por getpid 

		while(1){
		printf("Listo para recibir la señal SIGUSR1\n"); //se mostrara un breve mensaje

		signal(SIGUSR1,signs); // signal es una una señal que se activara al recibir SIGUSR1 y que se ejecutara el void signs

		sleep(25); // es una venata de tiempo de 25seg hasta que se vuelva a mostrar los mensajes anteriores
		}
	}
}