#define N 4
#include<stdio.h>

// Prototipus accions auxiliars
bool diagonal(int m[N][N]);
void mostrar(int m[N][N]);

int main(){
    int m[N][N]={0,1,2,3,4,5,6,2,7,8,5,1,9,7,4,0};
    
    mostrar(m);
    
    if (diagonal(m)) {
        printf("La matriu és simètrica respecte de la diagonal secundària\n");
    } else {
        printf("La matriu NO és simètrica respecte de la diagonal secundària\n");
    }
   
} // final de main

// Funcions i accions auxiliars

void mostrar(int m[N][N]){
    int f,c;
    for (f=0;f<N;f++){
        for (c=0; c<N; c++) {
            printf("%i \t", m[f][c]);
        }
        putchar('\n');
    }
}


bool diagonal(int m[N][N]){
    bool ok;
    int f,c;
    
    ok=true;
    f=0;
    while (ok==true && f<(N-1)) {
        c=0;
        while (ok==true && c<(N-1-f)) {
            if (m[f][c]!=m[N-1-c][N-1-f]) {
                ok=false;
            } else {
                c++;
            }
        }
        if (ok==true) {
            f++;
        }
    }
    return(ok);
}
