#include <stdio.h>
int resta (int c, int d) {
	return c - d;
}

// Este es la funcion main
int main() {
	printf("Hello World!\n");
	
	int num = 10;
	// bucle
	for (int i = 0; i < num; i++) {
		int resultado = sum(i, 3);

		printf("Iteracion i: %d, resultado: %d\n", i, resultado);
	}

	return 0;
}
