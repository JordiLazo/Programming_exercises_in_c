#include<stdio.h>

#define N 4

bool diagonals_iguals(int m[N][N]);

int main () {
	int m[N][N] = {{1, -8, 2, 0}, {24, 2, -3, -7}, {-17, 8, 3, 10}, {5, 8, -64, 4}};

	if (diagonals_iguals(m)) {
		printf("Les diagonals sumen igual que la primera i última columna\n.");
	}
}

// Per a la solució només feia falta el codi davall d'aquest comentari. Hi ha solucions més llargues igual de correctes.

bool diagonals_iguals(int m[N][N]) {
	int i, diagonals = 0, columnes = 0;

	for (i = 0; i < N; i++) {
		diagonals = diagonals + m[i][i] + m[N - 1 - i][i];
		columnes = columnes + m[i][0] + m[i][N - 1];
	}

	if (diagonals == columnes) {
		return true;
	} else {
		return false;
	}
}

