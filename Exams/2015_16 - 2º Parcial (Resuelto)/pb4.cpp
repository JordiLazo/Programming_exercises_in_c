#include <stdio.h>

#define M 60

// Declaracions protopipus

int subcadena(char t1[M+1], char t2[M+1], int a, int b);
int llargada (char t[M+1]);
int buscar(char t1[M+1], char t2[M+1], int a, int b);
bool verificar(char t1[M+1], int i, char t2[M+1], int j, int final);

int main( ){
    char t1[M+1] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ-ABC-ABC";
    char t2[M+1] = "DEFGHIJKLMNOP-ABC";
    int n;
    
    n=subcadena(t1, t2, 3, 6);
    printf("Posición: %d \n",  n);
    
    n=subcadena(t1, t2, 0, 2);
    printf("Posición: %d \n",  n);
    
    n=subcadena(t1, t2, 1, 1);
    printf("Posición: %d \n",  n);
    
    n=subcadena(t1, t2, 14, 16);
    printf("Posición: %d \n",  n);
    
    n=subcadena(t1, t2, 12, 16);
    printf("Posición: %d \n",  n);
    
    n=subcadena(t1, t2, 6, 4);
    printf("Posición: %d \n",  n);
    
    n=subcadena(t1, t2, 14, 18);
    printf("Posición: %d \n",  n);
}


// 1r nivell

int subcadena(char t1[M+1], char t2[M+1], int a, int b)
//cercar en t1 el contingut de t2 entre a i b (ambos inclosos)
{   int l, pos;
	
	l =llargada (t2);
	if (a < 0 || b < a || b > l-1){
        printf("Error parametros subcadena 2 %s de longitud %d \n",t2, l);
		pos = -1;}
	else{
        pos=buscar(t1, t2, a, b);
    }
	
	return(pos);
}


// 2n nivell

int llargada (char t[M+1])
{ int i;
	
	i=0;
	while (t[i] != '\0') {
		i=i+1;
	}
	return(i);
}

int buscar(char t1[M+1], char t2[M+1], int a, int b){
    int l, pos;
	bool inicio, trobat;
    
	pos = 0;
	trobat = false;
	l =llargada(t1);
	
	while (!trobat && (pos+(b-a)) <= l){
        if (t1[pos] == t2[a]){
            trobat = verificar(t1, pos, t2, a, b);
        }
        
		if (!trobat){
            pos=pos+1;
        }
	}
		
	if (!trobat){
        return(-1);
    }else{
        return(pos);
    }
}

//3r nivell

bool verificar(char t1[M+1], int i, char t2[M+1], int j, int final){
    bool iguals;
	
	iguals=true;
    
	while (iguals && j <= final){
        if (t1[i]==t2[j]){
            i=i+1;
            j=j+1;
        }else{
            iguals=false;
        }
        
	}
	return(iguals);
}

