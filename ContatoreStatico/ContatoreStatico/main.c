#include <stdio.h>

int conta() {
	// Eliminare la parola chiave static per resettare il contatore ogni volta!
	static int contatore = 0;
	contatore++;
	return contatore;
}

int main() {
	printf("Conto: %d\n", conta());
	printf("Conto: %d\n", conta());
	return 0;
}