#include<stdio.h>
#define N 5
#define MAX 20
// Prototipo de la  función auxiliar
char relacion(char p1[MAX+1] , char p2[MAX+1]);

int main( ){
    char p[N][MAX+1] = {"abcd", "abc", "abcde",  "abfg", "abcd"};
    int i, j;
    char c;
    for (i = 0; i < N; i++)
        for (j = N-1; j > i; j--){
            c = relacion(p[i], p[j]);
            printf("Palabra %s \t Palabra %s \t Caracter %c \n", p[i], p[j], c );
        }
}
// Función auxiliar del 1r nivel
char relacion(char p1[MAX+1] , char p2[MAX+1]){
    int i;
    bool ok;
    i=0;
    ok= true;
    while (ok && p1[i] != '\0' && p2[i] != '\0'){
        if (p1[i] != p2[i]){
            ok=false;
        } else{
            i=i+1;
        }
    } // final del while
    if  (p1[i] != '\0') {
        return(p1[i]);
    } else if (p2[i] != '\0'){
        return(p2[i]);
    } else{
        return ('*');
    }
}
