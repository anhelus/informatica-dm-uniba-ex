#include <stdio.h>

void compara_intervalli(int a, int b, int c, int d) {
	int max_estremo_inferiore = a;
	int min_estremo_superiore = b;
	if (c > a) {
		max_estremo_inferiore = c;
	}
	if (d < b) {
		min_estremo_superiore = d;
	}
	printf("Il maggiore tra gli elementi e' %d\n", max_estremo_inferiore);
	printf("Il minore tra gli elementi e' %d\n", min_estremo_superiore);
	if ((b - a) != (d - c)) {
		printf("Gli intervalli non hanno lo stesso numero di elementi\n");
	} else {
		printf("Gli intervalli hanno lo stesso numero di elementi\n");
	}
}

void compara_intervalli_logici(int a, int b, int c, int d) {
	if (((b - a) == (d - c)) &&
		((a == c) && (b == d))) {
			printf("Gli intervalli hanno lo stesso numero di elementi e gli estremi coincidono\n");
	}
	else if (((b - a) == (d - c)) &&
		((a == c) || (b == d))) {
		printf("Gli intervalli hanno lo stesso numero di elementi, ed uno tra gli estremi coincide\n");
	}
	else if (((b - a) == (d - c)) &&
		!((a == c) && (b == d))) {
		printf("Gli intervalli hanno lo stesso numero di elementi, e gli estremi non coincidono\n");
	}
	else if (!((b - a) == (d - c)) &&
		((a == c) && (b == d))) {
		printf("Gli intervalli non hanno lo stesso numero di elementi, e gli estremi coincidono\n");
	}
	else if (!((b - a) == (d - c)) &&
		((a == c) || (b == d))) {
		printf("Gli intervalli non hanno lo stesso numero di elementi, ed uno tra gli estremi coincide\n");
	}
	else if (!((b - a) == (d - c)) &&
		!((a == c) && (b == d))) {
		printf("Gli intervalli non hanno lo stesso numero di elementi, e gli estremi non coincidono\n");
	}
}

int main() {
	int a_1 = 1;
	int b_1 = 5;
	int c_1 = 4;
	int d_1 = 9;
	int a_2 = 7;
	int b_2 = 12;
	int c_2 = 1;
	int d_2 = 6;

	// Test operatori relazionali
	compara_intervalli(a_1, b_1, c_1, d_1);
	compara_intervalli(a_2, b_2, c_2, d_2);
	// Test operatori logici
	compara_intervalli_logici(a_1, b_1, c_1, d_1);
	compara_intervalli_logici(a_2, b_2, c_2, d_2);
}
