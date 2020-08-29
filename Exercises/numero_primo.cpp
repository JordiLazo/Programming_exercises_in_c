#include <stdio.h>

int main(){

	int a=0,i,n;
	
	printf("Introduce un número");
	scanf("%i",&n);
	
	for(i=1;i<(n+1);i++){
       if(n%i==0){
       a++;
       }
	}
	if(a!=2){
	printf("No es Primo");
	}else{
	printf("Si es Primo");
	}
}
