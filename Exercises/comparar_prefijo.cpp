#include <stdio.h>

int main(){

	char contador1[20];
	char contador2[20];
	int i=0;

	printf("Introduce el prefijo a comprobar\n");
	scanf("%s",contador1);
	
	printf("Introduce una serie de caracteres\n");
	scanf("%s",contador2);
	
	while(contador1[i]!='\0' && contador1[i]==contador2[i]){
		i++;
	}
	if(contador1[i]=='\0'){
		printf("La introducida es prefijo\n");
	}else{
		printf("La palabra introducida NO es prefijo\n");
	}
}
