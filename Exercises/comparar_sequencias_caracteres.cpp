#include<stdio.h>
#include<string.h>
#define M 10
int main(){

	char sequencia1[M], sequencia2[M];
	char c;
	int i=0,j=0,k=0,l=0;

	printf("Introduce un texto acabdo en espacio\n");
	scanf("%s",sequencia1);

	printf("Introduce un texto acabado en espacio\n");
	scanf("%s",sequencia2);

		while(i<M && c!='\0' ){
			if(sequencia1[i]!=sequencia2[i]){
				
				l++;
			}
			c=sequencia1[i];
			i++;
		}
		
		if(l==0){
			printf("son iguals\n");
		}else{
			printf( "no son iguals\n");
		}
}
