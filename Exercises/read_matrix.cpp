#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 5

void escribir_matriz(int matriz[N] [N]);
void imprimir_matriz(int matriz[N] [N]);

int main(){

    int matriz[5][5];

    escribir_matriz(matriz);
    imprimir_matriz(matriz);

}

void escribir_matriz( int matriz [N][N]){
    srand(time(NULL));

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            matriz[i][j]=rand()%10;
        }
    }
}

void imprimir_matriz(int matriz [N][N]){

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            printf("%i ",matriz[i][j]);
        }
        printf("\n");
    }
    
}