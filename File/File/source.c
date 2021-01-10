#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>

FILE* fp;

typedef struct triangolo {
	int lato_uno;
	int lato_due;
	int lato_tre;
} TRIANGOLO;

TRIANGOLO sort_struct(TRIANGOLO triangolo_ingresso) {
	TRIANGOLO triangolo_uscita = { .lato_uno = 0, .lato_due = 0, .lato_tre = 0 };
	if (triangolo_ingresso.lato_due > triangolo_ingresso.lato_uno) {
		triangolo_uscita.lato_uno = triangolo_uscita.lato_due;
		triangolo_uscita.lato_due = triangolo_uscita.lato_uno;
	}
	return triangolo_uscita;
}

void passa_struct(TRIANGOLO triangolo) {
	if (triangolo.lato_uno > triangolo.lato_due) {
		printf("pippo");
	}
	else {
		printf("paperino");
	}
	//printf("%d", triangolo.lato_uno);
}

void scrivi_file(int numero)
{
	char prima_riga[128] = "Ho creato il file!\n";
	char* seconda_riga = "Ora posso scriverci sopra un numero!";
	fprintf(fp, prima_riga);
	fprintf(fp, "%s %d\n", seconda_riga, numero);
}

void leggi_file()
{
	rewind(fp);
	char prima_parola [10], seconda_parola [10], terza_parola [10], quarta_parola [10];
	if (fscanf(fp, "%s %s %s %s\n", prima_parola, seconda_parola, terza_parola, quarta_parola) <= 0)
		exit(EXIT_FAILURE);
	int numero;
	char a[10], b[10], c[10], d[10], e[10], f[10];
	if (fscanf(fp, "%s %s %s %s %s %s %d\n", a, b, c, d, e, f, &numero) <= 0)
		exit(EXIT_FAILURE);
	printf("La prima riga e': %s %s %s %s\n", prima_parola, seconda_parola, terza_parola, quarta_parola);
	printf("Il numero e': %d\n", numero);
}

int main() {
	TRIANGOLO t1 = { .lato_uno = 2, .lato_due = 3, .lato_tre = 5 };
	passa_struct(t1);
	// Esercizio 1
	//char nome[32];
	//char cognome[64];
	//int eta;

	//printf("Dimmi il tuo nome e cognome...\n");
	//if (scanf("%s %s", nome, cognome) <= 0)
	//	return -1;
	////printf("Dimmi il tuo cognome...\n");
	////if (scanf("%s", cognome) <= 0)
	//	//return -1;
	//printf("Quanti anni hai?\n");
	//if (scanf("%d", &eta) <= 0)
	//	return -1;
	//printf("Ti chiami %s %s ed hai %d anni!\n", nome, cognome, eta);

	//// Dichiaro una variabile file
	//fp = fopen("prova.txt", "r");
	//if (fp == NULL) {
	//	printf("E' stato impossibile leggere o scrivere sul file. Errore.");
	//	exit(EXIT_FAILURE);
	//}
	//else {
	//	printf("Ok");
	//}
	//// Uso la funzione crea_file per scriverci sopra
	////scrivi_file(5);
	////leggi_file();

	//fclose(fp);

	return 0;
}