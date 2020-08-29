#define T 4
#define M 20

#include<stdio.h>
#include<string.h>

void move(char p2[M+1], char p1[M+1]);

int main( ){
  char lp[T][M+1]={"abcd", "xyz", "PQ", "12345"};
  int i;

  for (i = 1; i < T; i = i + 1) {
    move(lp[i-1], lp[i]);
    printf("Esto es %s\n",lp[i]);
  }

  for (i = 0; i < T; i = i + 1) {
    printf("La cadena %d és: %s \n", i, lp[i]);
  }
}

void move(char p2[M+1], char p1[M+1]){
  strcpy(p2, p1);
}
