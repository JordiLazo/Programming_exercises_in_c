#include<stdio.h>
#include<string.h>

#define M 20

void llegir_1a_paraula(char p[M+1], char &dc);
void llegir_seguent_paraula(char p[M+1], char &dc);
void saltar_blancs(char &dc);
void llegir_paraula(char p[M+1], char &dc);
bool darrera_paraula(char p[M+1]);

// Des d'aquí fins al següent comentari és la solució
bool inversa(char p[M+1], char p_anterior[M+1]);

int main () {
	char dc;
	char p[M+1]={"hola"}, p_anterior[M+1]={"xyz abzyxefg"};
	int cont = 0;

	llegir_1a_paraula(p, dc);
	if (darrera_paraula(p)) {
		printf("Text buit\n");
	} else {
		strcpy(p_anterior, p);
		llegir_seguent_paraula(p, dc);
		while (!darrera_paraula(p)) {
			if (inversa(p, p_anterior)) {
				cont++;
			}
			strcpy(p_anterior, p);
			llegir_seguent_paraula(p, dc);
		}
		printf("Nombre de paraules que són idèntiques a la inversa de la paraula prèvia = %i\n", cont);
	}
}

bool inversa(char p[M+1], char p_anterior[M+1]) {
	int i, j;

	if (strlen(p) == strlen(p_anterior)) {
		i = 0;
		j = strlen(p_anterior) - 1;
		while (j >= 0 && p[i] == p_anterior[j]) {
			i++;
			j--;
		}
		if (j < 0) {
			return true;
		}
	}
	return false;
}

// Funcions i accions ja definides en l'enunciat

void llegir_1a_paraula(char p[M+1], char &dc){
  scanf("%c", &dc);
  saltar_blancs(dc);
  llegir_paraula(p, dc);
}

void llegir_seguent_paraula(char p[M+1], char &dc){
  saltar_blancs(dc);
  llegir_paraula(p, dc);
}

void saltar_blancs(char &dc){
  while (dc == ' '){
    scanf("%c", &dc);
  }
}

void llegir_paraula(char p[M+1], char &dc){
  int i = 0;
  while (dc != ' ' && dc != '.' && i < M) {
    p[i] = dc;
    i = i + 1;
    scanf("%c", &dc);
  }
  p[i]='\0';
}

bool darrera_paraula(char p[M+1]){
  if (p[0] == '\0') {
    return(true);
  } else {
    return(false);
  }
}
