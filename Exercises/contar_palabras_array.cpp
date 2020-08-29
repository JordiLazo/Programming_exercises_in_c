#include<stdio.h>
#include<ctype.h>

int main(){
    char c;
    int contador[26]={0};
    printf("Introduce cosas\n");
    scanf("%c",&c);


    while(c!='.'){
        if(isalpha(c)){
            tolower(c);
        }
        contador[c-'a']++;
        
        
        scanf("%c",&c);

        /* code */
    }
    for(int i=0;i<26;i++){
        printf("La la letra %c se repite %i\n",i+'a',contador[i]);
    }
    
}