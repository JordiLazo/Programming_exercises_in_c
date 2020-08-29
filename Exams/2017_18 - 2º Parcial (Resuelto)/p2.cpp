#define N 3
#include<stdio.h>

// Prototipus accions auxiliars
void copiar_valor(float f, float &x);
void intercanvi(float t1[N], float t2[N]);
void intercanviar_valor(float &f1, float &f2);
void mostrar(float t[N]);

int main(){
    float t1[N], t2[N];
    int i;
    for (i=0; i<N; i++){
        copiar_valor(3.2 , t1[i]);
        copiar_valor(5.7 , t2[i]);
    }
    intercanvi(t1, t2);
    mostrar(t1);
    mostrar(t2);
} // final de main

// Implementació accions auxiliars
void copiar_valor(float f, float &x){
    x=f;
}
void intercanvi(float t1[N], float t2[N]){
    int i;
    for (i=0; i<N; i++){
        intercanviar_valor(t1[i], t2[i]);
    }
}
void intercanviar_valor(float &f1, float &f2){
    float v;
    v=f1;
    f1=f2;
    f2=v;
}
void mostrar(float t[N]){
    int i;
    for (i=0; i<N; i++) {
        printf("%G\t", t[i]);
    }
    putchar('\n');
}

