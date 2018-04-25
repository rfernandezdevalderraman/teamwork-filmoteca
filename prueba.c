# include <stdio.h>

int main() {
	FILE *pf1, *pf2;
	char texto[31];
	pf1=fopen("prueba.txt","w");
		if (pf1==NULL){
			printf("error al abrir el archivo");
			return -1;	}
		else{
			fprintf(pf1,"probando en la prueba");
		}
		fclose(pf1);
		
	pf2=fopen("prueba.txt","r");	
		if (pf2==NULL){
			printf("error al abrir el archivo");
			return -1;	}
		else{
			fscanf(pf1,"%[^\0]s", texto);
		}
		fclose(pf2);	
		printf("%s",texto);
		return 0;		
}
