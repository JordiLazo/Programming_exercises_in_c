#include <stdio.h>
#include<ctype.h>
int main(){
    char c;
    printf("Introduce una serie de caracteres:\n");
    scanf("%c",&c);

    while(c!='.'){
        if(isdigit(c)){
            printf("Conte un digit\n");
        }else{
            printf("No conte digit\n");
        }
        scanf("%c",&c);
    }
}