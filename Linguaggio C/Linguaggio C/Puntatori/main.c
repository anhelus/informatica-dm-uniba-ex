#include <stdio.h>
#include "puntatori.h"
#include "puntatori_funzione.h"

int main() {
	// Eserczio 1: puntatori e deferenziazione
	int a = 1;
	double b = 0.1;
	mostra_puntatore_intero(a);
	mostra_puntatore_double(b);
	// Eserczio 2: puntatori come argomenti
	int c = deferenzia_compara_intero(&a, a);
	double d = deferenzia_compara_decimale(&b, b);
	// Esercizio 3: passaggio per valore e reference
	int* p = restituisci_puntatore(a);
	if (p == &a) {
		printf("I puntatori combaciano!\n");
	}
	else {
		printf("I puntatori non combaciano!\n");
	}
	// Eserczio 4: puntatore a void
	puntatore_a_void('c');
	// Esercizio 5
	char* nome = mio_nome();
	printf("%s", nome);
}