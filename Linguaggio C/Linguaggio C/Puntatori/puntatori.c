#include <stdio.h>
#include "puntatori.h"

void mostra_puntatore_intero(int intero) {
	int* puntatore = &intero;
	printf("L'indirizzo della variabile e': %p\n", puntatore);
}

void mostra_puntatore_double(double decimale) {
	double* puntatore = &decimale;
	printf("L'indirizzo della variabile e': %p\n", puntatore);
}

int* restituisci_puntatore(int intero) {
	return &intero;
}

int deferenzia_compara_intero(int* puntatore_intero, int comparato) {
	int puntato = *puntatore_intero;
	if (puntato == comparato) {
		printf("La comparazione ha avuto successo!\n");
	}
	return puntato;
}

double deferenzia_compara_decimale(double* puntatore_decimale, double comparato) {
	double puntato = *puntatore_decimale;
	if (puntato == comparato) {
		printf("La comparazione ha avuto successo!\n");
	}
	return puntato;
}

void puntatore_a_void(char ch) {
	void* puntatore;
	puntatore = &ch;
	printf("Il puntatore a void ha indirizzo: %p\n", puntatore_a_void);
	char* puntatore_a_char = (char*)puntatore;
	// Dereferenziazione
	printf("La variabile originaria e': %c\n", *puntatore_a_char);
}
