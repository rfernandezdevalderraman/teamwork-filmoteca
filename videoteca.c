#include<stdio.h>
#include<math.h>
#include<math.h>

typedef struct{
	char titulo[50];
	int year;
	float nota;
	char genero;
}pelicula;

//Función ordenar por año
//Función ordenar por titulo
//Función ordenar por nota
//Función ordenar por género
//Función registar película

int main()
{
	FILE *pvideoteca;
	int a, error;
	pelicula vcatalogo[100];
	do
	{
		printf("Que desea hacer: 1.Registar, 2.Buscar\n");
		scanf("%d",&a);
		switch (a)
			{
				case '1':
					//tatata
					error=1;
					break;
				case '2':
					//tatata
					error=1;
					break;
				default:
					error=-1;
			}
	}while(error<0);
}
