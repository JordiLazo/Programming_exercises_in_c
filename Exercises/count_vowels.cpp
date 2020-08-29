#include<stdio.h>
#include<string.h>
#define N 20

void cambiar(char string1[]);
void cambiar_letra_a(char string1[]);
int main(){
    char string1[N];
    char string2[N];

    printf("Introduce a text:\n");
    fgets(string1,N,stdin);
    cambiar_letra_a(string1);

    printf("You have introduced: %s \n", string1);

}

void cambiar(char string1[]){
    
    for(int i=0;i<N;i++){
        if(string1[i]=='\n'){
            string1[i]='\0';
        }
    }
}
void cambiar_letra_a(char string1[]){
    int contador;
    int limite=strlen(string1);

    for(int i =0; i<limite;i++){
        if(string1[i]=='a' || string1[i]=='e'|| string1[i]=='i'|| string1[i]=='o'|| string1[i]=='u'){
            contador=contador+1;
        }
    }
    printf("You have introduced \"%i\" vowels \n",contador);
}