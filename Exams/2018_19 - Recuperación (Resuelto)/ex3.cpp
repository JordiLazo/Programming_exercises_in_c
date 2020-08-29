#include<stdio.h>
#include<string.h>

#define T 100
#define M 20

void mostrar_repeticions_1e_caracter(char lp[T][M + 1]);
void repeticions_1e_caracter_paraula(char p[M + 1]);

int main( ){
  char lp[T][M + 1] = {"gat", "acabalar", "tortuga", "gos", "toro", "cocodril", "", "xai", "zzz"};

  mostrar_repeticions_1e_caracter(lp);
}

void mostrar_repeticions_1e_caracter(char lp[T][M + 1]) {
	int i = 0;

	while (i < T && strcmp(lp[i], "zzz") != 0) {
		repeticions_1e_caracter_paraula(lp[i]);
		i++;
	}
}

void repeticions_1e_caracter_paraula(char p[M + 1]) {
	int i, cont;

	cont = 0;
	for (i = 1; i < (int) strlen(p); i++) {
		if (p[0] == p[i]) {
			cont++;
		}
	}
	if (cont > 0) {
		printf("%s té %i repeticions de la primera lletra %c.\n", p, cont, p[0]);
	}
}
