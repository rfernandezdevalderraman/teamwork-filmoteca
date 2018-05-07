#include<stdio.h>
#include<math.h>
#include<math.h>

typedef struct{
	char titulo[50];
	int year;
	float nota;
}pelicula;

//Función ordenar por año
//Función ordenar por titulo
//Función ordenar por nota
//Función ordenar por género
void registrapeli(pelicula peli);

int main()
{
	FILE *pvideoteca;
	int a, error;// a sirve para el switch
	pelicula vcatalogo[100];
	do
	{
		printf("Que desea hacer: 1.Registar, 2.Buscar\n");
		scanf("%d",&a);
		switch (a)
			{
				case 'a==1':
					pvideoteca=fopen("Videoteca","a");
					registrapeli(vcatalogo[0]);
					error=1;
					break;
				case 'a==2':
					//tatata
					error=1;
					break;
				default:
					printf("Opcion no disponible\n");
					error=-1;
					break;
			}
	}while(error<0);
}
void registrapeli(pelicula peli)
{
		printf("Titulo de la pelicula:\n");
					scanf("%s",&peli.titulo);
					printf("Year en el que se estreno la peli:\n");
					scanf("%d",&peli.year);
					printf("Nota de la pelicula:\n");
					scanf("%.2f",&peli.nota);
}
