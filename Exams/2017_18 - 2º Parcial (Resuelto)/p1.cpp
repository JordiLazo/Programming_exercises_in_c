#include<stdio.h>
// Prototipus accions auxiliars
void A(int b, int &a);
void B(int &i, int &j);

int main(){
    int a = 1, b = 0;
    A(a, b);
    printf("Main: %i   %i \n",a , b);
}
// Implementació accions auxiliars
void A(int b, int &a){
    int c;
    b = 5;
    c = a;
    a = b;
    B(b, a);
    printf("Acció A: %i   %i   %i  \n", a, b, c);
}
void B(int &i, int &j){
    int c = 4;
    i = j + 2;
    j = c + 2;
    printf("Acció B: %i   %i   %i  \n", i, j, c);
}
