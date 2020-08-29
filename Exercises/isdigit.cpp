#include<stdio.h>
#include<string.h>
#include<cctype>
#define N 90
int main(){
    char string1[N];
    int contador;

    printf("Introduce palabras\n");
    fgets(string1,N,stdin);

    printf("Has introducido %s \n",string1);

    int limite= strlen(string1);

    for(int i=0; i<limite;i++){
        if(isdigit(string1[i])){
            contador=contador+1;
        }
    }
    printf("tu frase contiene %i numeros\n", contador);
}