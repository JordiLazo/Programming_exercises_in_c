#include <stdio.h>

#define N 5

void A(char m[N][N + 1], int n);
int B(int i, int &plus);

int main( ){
	char m[N][N + 1] = {"abcde", "fghij", "klmno", "pqrst", "uvwxy"};
	int i = 0, plus = 1;

	while (i < N * N) {
		A(m, i);
		i = B(i, plus);

		//printf("La i vale \"%i\" i el plus vale \"%i\" \n",i,plus);
	}
}

void A(char m[N][N + 1], int n) {
	int i, j;

	i = n / N;
	j = n % N;
	printf("Element[%i][%i]=%c\n", i, j, m[i][j]);
}

int B(int i, int &plus) {
	i = i + plus;
	plus++;
	return i;
}