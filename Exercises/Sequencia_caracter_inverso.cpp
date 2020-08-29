#include <stdio.h>
#include <stdlib.h>
#define M 5
int main(){
	char c,paraula[M];
	char i=1;
	printf("Introdice un texto\n");
	scanf("%c",&c);
		while(c!='\n'){
			paraula[i]=c;
			i++;
			scanf("%c",&c);
		}
		int j=i-1;
		while(j!=0){
		printf("%c",paraula[j]);
		j--;
		}
		printf("\n");
		}
