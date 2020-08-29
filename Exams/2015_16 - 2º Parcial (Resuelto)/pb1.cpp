#include <stdio.h>
// Prototipos de las acciones y funciones auxiliares
void B(int &x, int &y);
int A(int x, int y);

int main( ){
    int a[2] = {5, 6};
    int c = 1;
    B(a[0], a[1]);
    printf("Main:\n a[0] = %d \t a[1] = %d \t c = %d \n", a[0], a[1], c);
}
// Acciones y funciones del 1r nivel
void B(int &x, int &y){
    int c;
    c = A(x, y);
    x=8;
    y=10;
    printf("B:\n c = %d \n",c);
}
// Acciones y funciones del 2º nivel
int A(int x, int y){
    x = 2*x;
    y = 2*y;
    printf("A:\n x = %d \t y = %d \n", x, y);
    return(x-y);
}
