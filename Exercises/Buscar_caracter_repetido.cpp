#include <stdio.h>
#include<ctype.h>
int main(){
    char c,a,i=0;
    printf("Introduce una serie de caracteres:\n");
    scanf("%c",&c);
    a=c;
    scanf("%c",&c);

    while(c!='\n'){
        
        if(a==c){
            i++;
            
        }
        scanf("%c",&c);
        }if(i>0){
            printf("El primer digit es repeteix\n");
            
        }else{
            printf("El primer digit no es repeteix\n");
        }
}

