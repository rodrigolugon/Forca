#include <stdio.h>

int main() {
	int notas[10];

	notas[0] = 10;
	notas[2] = 5;
	notas[8] = 9;
	notas[9] = 4;

	printf("%d %d %d", notas[0], notas[8], notas[9]);

	return 0;
}