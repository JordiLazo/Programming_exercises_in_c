#include<stdio.h>
#include<string.h>
#include<ctype.h>

int B(int i, int &plus);
int main(){

    int x=4;
    char cad1[25]={"espada"};
    printf("El caracter %i de cad1 es: %c\n",x,cad1[x]);
    printf("El string cad1 es: %s\n",cad1);

    char cad2[18]={"Avengers: Endgame"};
    if(strcmp(cad1,cad2)==0){
        printf("La cad1 es = que cad2\n");
    }else{
        printf("La cad2 es diferente a cad2\n");
    }
    int cad1_length= strlen(cad1);
    printf("La cad1 contiene %i caracteres\n", cad1_length);
    

    strcpy(cad1,cad2);
    printf("La nueva cadena es %s\n",cad1);

    int cad2_length= strlen(cad1);
    printf("La cad1 contiene %i caracteres\n", cad2_length);

    char cad3[10]={"J?SEPE"};

    printf("La palabra %s tiene letras del alfabeto: %i\n",cad3,isalpha(cad3[1]));

    char cad4[18]={"MeCanica cuantiq9"};

    if(isdigit(cad4[16])==0){
        printf("La cadena \"%s\" NO CONTIENE UN DIGITO en la posicion %c NO ES UN DIGITO\n",cad4,cad4[16]);
    }if(isdigit(cad4[16])!=0){
        printf("La cadena \"%s\" CONTIENE UN DIGITO en la posicion %c\n",cad4,cad4[16]);
    }

    if(islower(cad4[0])==0){
        printf("La cadena \"%s\" NO CONTIENE UNA MINISCULA en la posicion %c\n",cad4,cad4[0]);
    }if(islower(cad4[0])!=0){
        printf("La cadena \"%s\" CONTIENE UNA MINUSCULA en la posicion %c\n",cad4,cad4[0]);
    }if(isupper(cad4[2])==0){
        printf("La cadena \"%s\" NO CONTIENE UNA MAYUSCULA en la posicion %c\n",cad4,cad4[2]);
    }if(isupper(cad4[2])!=0){
        printf("La cadena \"%s\" CONTIENE UNA MAYUSCULA en la posicion %c\n",cad4,cad4[2]);
    }

    char cad5[6]={"jORdI"};

    printf("La cadena \"%s\" cambiamos la mayuscula %c\n",cad5,tolower(cad5[1]));

    printf("La cadena \"%s\" cambiamos la minuscula %c\n",cad5,toupper(cad5[3]));
    

    int y=3;
    char cad_bi[10][10]={"perro","tronos","jordi"};
    printf("El caracter %i de la paraula %s cad2 es: %c\n",y,cad_bi[1],cad_bi[1][y]);

    
    int i=0; int plus=0;
    i=B(i,plus);
    printf("La i vale %i\n",i);
}
int B(int i, int &plus){
    i=i+plus;
    plus++;
    return i;
}