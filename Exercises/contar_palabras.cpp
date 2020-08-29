#include<stdio.h>

int main(){

	int contador=0;
	char cadena[20];
	
	printf("Introduce una serie de palabras\n");
	scanf("%s",cadena);
	int i=0;
		while(i<cadena[i]!= '\0'){
			contador++;
			i++;
		}
		
	printf("La palabra introducida \"%s\" contiene %i palabras\n",cadena,contador);
}
