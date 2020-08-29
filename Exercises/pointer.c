#include<stdio.h>

int main (){
    int x, *y;
    x = 4;
    y = &x;
    printf("El valor del puntero y es :%d\n",*y);
}