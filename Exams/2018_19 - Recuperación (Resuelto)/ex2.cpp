#include<stdio.h>

#define N 4

bool filsen_igual_colpar(int m[N][N]);

int main () {
	int m[N][N] = {{19, -8, 2, 0}, {24, 2, -3, -7}, {-17, 8, 3, 10}, {5, 8, -64, 4}};

	if (filsen_igual_colpar(m)) {
		printf("Iguals.\n");
	}
}

// Per a la solució només feia falta el codi davall d'aquest comentari.

bool filsen_igual_colpar(int m[N][N]) {
	int f, c, filsen = 0, colpar = 0;

	for (f = 1; f < N; f = f + 2) {
		for (c = 0; c < N; c++) {
			filsen = filsen + m[f][c];
		}
	}

	for (f = 0; f < N; f++) {
		for (c = 0; c < N; c = c + 2) {
			colpar = colpar + m[f][c];
		}
	}	

	if (filsen == colpar) {
		return true;
	} else {
		return false;
	}
}

