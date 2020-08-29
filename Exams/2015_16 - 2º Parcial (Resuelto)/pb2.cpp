#include<stdio.h>
#define M 5
// Prototipos de las acciones auxiliares
void transformar(int m1[M][M], int m2[M][M], int n);
void mostrar(int m[M][M] , int n);

int main( ){
    int m1[M][M] = {{1,1,1,1,1}, {2,2,2,2,2}, {3,3,3,3,3}, {4,4,4,4,4}, {5,5,5,5,5}};
    int m2[M][M];
    transformar(m1, m2, M);
    mostrar(m1, M-2);
    mostrar(m2, M-1);
}
// Acciones auxiliares
void transformar(int m1[M][M], int m2[M][M], int n){
    int x, y;
    for (x = 0; x < n; x++){
        for (y = 0; y < n; y++){
            m2[y][x] = m1[x][y];
        }
    }
}
void mostrar(int m[M][M] , int n){
    int i, j;
    for (i = 0; i < n; i++){
        for (j = i; j < n; j++){
            printf("%d \t", m[i][j]);
        }
        putchar('\n');
    }
}
