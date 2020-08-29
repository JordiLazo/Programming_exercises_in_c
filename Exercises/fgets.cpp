#include<stdio.h>
#include<string.h>
#define N 30

int main(){
    char frase1[N];
    char frase2[N];
    printf("Introduce la primera serie\n");
    fgets(frase1,N,stdin);

    printf("Introduce la segunda serie\n");
    fgets(frase2,N,stdin);

    printf("Has introducido en la frase 1: %s \n", frase1);
    printf("Has introducido en la frase 2: %s \n", frase2);

    

    if(strcmp(frase1,frase2)==0){
        printf("Son iguales\n");
    }else{
        printf("no son iguales\n");
    }
}