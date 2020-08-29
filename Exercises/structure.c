#include<stdio.h>
#include<string.h>
#define N 5

typedef struct{
    int paginas;
    char nombre [50];
    float precio;
}libro;

int main(){
    libro JT[N];

    for(int i = 0 ; i<N;i++){
        JT[i].precio = 25+i;
        printf("El precio de la estructura %d es %f\n",i, JT[i].precio);

    }
    
    /*
    libro JT;
    JT.paginas = 50;
    strcpy(JT.nombre,"Juego de tronos");
    JT.precio = 23.9;

    printf("Paginas %d\n",JT.paginas);
    printf("El nombre del libro es: %s\n",JT.nombre);
    printf("El precio del libro es: %f\n",JT.precio);
    */    
}