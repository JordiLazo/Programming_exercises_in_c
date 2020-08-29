#include<stdio.h>
#include<string.h>
#define M 30

int main(){
    char a[M];
    int x,z,espacios=0,letras=0;

    printf("Escriba una frase:\n");
    scanf("%[^\n]",&a);

    z=strlen(a);

    for(x=0;x<=z;x++){
        if(a[x]==' '){
            espacios++;
        }
    }
    letras = z-espacios;
    printf("Hay %d espacios en esta frase\n",espacios);
    printf("Hay %d de caracteres en esta frase\n",letras);
}