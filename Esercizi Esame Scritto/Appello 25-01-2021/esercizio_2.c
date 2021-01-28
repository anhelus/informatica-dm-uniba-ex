#include <stdio.h>

// Questo è un esempio di funzione con all'interno un ciclo while
void funzione_while(int limite) {
	int condizione = 0;
	while(condizione < limite) {
		printf("Siamo all'interno del while...\n");
		condizione++;
	}
	printf("Siamo all'esterno del while...\n");
}

// Questo è un esempio di funzione con all'interno un ciclo for.
void funzione_for(int limite) {
	for(int i = 0; i < limite; i++) {
		printf("Siamo all'interno del for...\n");
	}
	printf("Siamo all'esterno del for...\n");
}

int main() {
	funzione_while(10);
	funzione_for(10);
	return 0;
}
