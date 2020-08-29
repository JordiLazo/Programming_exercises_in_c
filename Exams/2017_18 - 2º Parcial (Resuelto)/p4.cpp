#define M 30
#define D 10
#include<stdio.h>
#include<string.h>
#include<ctype.h>

void caracteres(char s[M+1], char &d, int &r);
int maxim(int rep[10]);
void comptar_digits(char s[M+1], int rep[D]);

int main(){
    char s[M+1];
    char d[D]={0};
    int r;
    
    printf("Introdueix una cadena de caracters de %i símbols\n", M);
    scanf("%s", s);
    
    caracteres(s, d, r);
    
    if (r==0) {
        printf("%s no conté dígits\n", s);
    } else {
        printf("El digit %c és el dígit amb més repeticions (%i) dintre de la cadena introduida (%s)\n", d, r, s);
    }
    
} // final de main

// Accions i funcions auxiliars

void caracteres(char s[M+1], char &d, int &r){
    int rep[D]={0};
    int pos;
    
    comptar_digits(s,rep);
    
    pos=maxim(rep);
   
    if (pos==-1) {
        d='0';
        r=0;
    } else {
        d='0'+pos;
        r=rep[pos];
    }
}

void comptar_digits(char s[M+1], int rep[D]){
    int i;
    int pos;
    
    i=0;
    while (s[i]!='\0') {
        if(isdigit(s[i])){
            pos=s[i]-'0';
            rep[pos]++;
        }
        i++;
    }
}

int maxim(int rep[D]){
    int i;
    int pos;
    
    pos=0;
    for (i=1; i<10; i++) {
        if (rep[i]>rep[pos]) {
            pos=i;
        }
    }
    if (rep[pos]==0) {
        return(-1);
    } else {
        return(pos);
    }
}
