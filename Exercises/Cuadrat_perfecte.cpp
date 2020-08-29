#include<stdio.h>
int main (){
    int n,k;
    printf("Introduce un número para averiguar si es un cuadrado perfecto o no:\n");
    scanf("%i",&n);
    for(k=1;(k*k)<n;k++){}
    if(k*k==n){
    printf("El número introducido es un cuadrado perfecto\n");
    }else{
        printf("El número introducido no es un cuadrado perfecto\n");
    }
}
