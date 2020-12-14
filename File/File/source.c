#pragma warning(disable : 4996)
#include <stdio.h>

FILE* fp;

void scrivi_file(int numero)
{
	char* prima_riga = "Ho creato il file!\n";
	char* seconda_riga = "Ora posso scriverci sopra un numero!";
	fprintf(fp, prima_riga);
	fprintf(fp, "%s %d\n", seconda_riga, numero);
}

void leggi_file()
{
	rewind(fp);
	char prima_parola [10], seconda_parola [10], terza_parola [10], quarta_parola [10];
	if (fscanf(fp, "%s %s %s %s\n", prima_parola, seconda_parola, terza_parola, quarta_parola) <= 0)
		return;
	int numero;
	char a[10], b[10], c[10], d[10], e[10], f[10];
	if (fscanf(fp, "%s %s %s %s %s %s %d\n", a, b, c, d, e, f, &numero) <= 0)
		return;
	printf("La prima riga e': %s %s %s %s\n", prima_parola, seconda_parola, terza_parola, quarta_parola);
	printf("Il numero e': %d\n", numero);
}

int main() {
	// Esercizio 1
	char nome[32];
	char cognome[64];
	int eta;

	printf("Dimmi il tuo nome e cognome...\n");
	if (scanf("%s %s", nome, cognome) <= 0)
		return -1;
	//printf("Dimmi il tuo cognome...\n");
	//if (scanf("%s", cognome) <= 0)
		//return -1;
	printf("Quanti anni hai?\n");
	if (scanf("%d", &eta) <= 0)
		return -1;
	printf("Ti chiami %s %s ed hai %d anni!\n", nome, cognome, eta);

	// Dichiaro una variabile file
	fp = fopen("prova.txt", "w+t");
	if (fp == NULL) {
		printf("E' stato impossibile leggere o scrivere sul file. Errore.");
		return -1;
	}
	// Uso la funzione crea_file per scriverci sopra
	scrivi_file(5);
	leggi_file();

	fclose(fp);

	return 0;
}