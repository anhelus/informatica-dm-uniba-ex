#include <stdio.h>

int main() {
	int tensore_interi[3][3][3];
	double tensore_decimali[3][3][3];
	int contatore_interi = 1;
	double contatore_double = 1.0;
	// Popolo
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				tensore_interi[i][j][k] = contatore_interi;
				contatore_interi++;
				tensore_decimali[i][j][k] = contatore_double;
				contatore_double++;
			}
		}
	}

	// Stampo a schermo
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				printf("L'elemento in posizione [i][j][k] per il tensore di interi e' %d\n", tensore_interi[i][j][k]);
			}
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				printf("L'elemento in posizione [i][j][k] per il tensore di decimali e' %f\n", tensore_decimali[i][j][k]);
			}
		}
	}

	if (sizeof(tensore_decimali) > sizeof(tensore_interi)) {
		printf("%d", sizeof(tensore_decimali));
	}
	else {
		printf("%d", sizeof(tensore_interi));
	}


}