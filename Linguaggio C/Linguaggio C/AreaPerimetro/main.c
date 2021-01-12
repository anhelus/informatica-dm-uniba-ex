#include <stdio.h>

// Questa � una variabile globale
int lato = 5;

int calcola_area_quadrato(int lato) {
	// Da questa funzione non "conosco" il valore di perimetro!
	// Quindi, questa istruzione non � valida:
	// printf("Il perimetro � pari a: %d\n", perimetro);
	printf("Lato: %d\n", lato);
	return lato * lato;
}

int calcola_perimetro_quadrato(int lato) {
	// Da questa funzione non "conosco" il valore di area!
	// Analogamente all'area, questa istruzione non � valida:
	// printf("L'area � pari a: %d\n", area);
	return lato * 4;
}

int incrementa(int var) {
	int contatore = 0;
	contatore++;
	return contatore;
}

int main() {
	/*
	 * Questa � la versione "locale" al main della variabile globale
	 * lato. Decommentando la seguente riga potremo vedere la precedenza
	 * che hanno le variabili locali rispetto a quelle globali.
	 **/
	 // int lato = 10;
	printf("Benvenuti\n");

	//int primo_Contatore = incrementa();
	//int secondo_contatore = incrementa();
	printf("%d", incrementa());
	printf("%d", incrementa());
	int area;
	int perimetro;
	area = calcola_area_quadrato(lato);
	perimetro = calcola_perimetro_quadrato(lato);
}