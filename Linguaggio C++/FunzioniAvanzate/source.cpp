#include <iostream>
#include <math.h>

using namespace std;

/* La funzione calcola_voto_esame calcola la media degli esoneri,
	* ovviamente approssimando per difetto.
	*/
int calcola_voto_esame(int* voto_esoneri, int numero_esoneri = 4) {
	int sum = 0;
	for (int i = 0; i < numero_esoneri; i++) {
		sum += voto_esoneri[i];
	}
	return int(round(sum / numero_esoneri));
}

double calcola_voto_esame(double* voto_esoneri, int numero_esoneri = 4) {
	double sum = 0;
	for (int i = 0; i < numero_esoneri; i++) {
		sum += voto_esoneri[i];
	}
	return (sum / numero_esoneri);
}

void promosso_o_bocciato(bool esito) {
	if (esito) {
		cout << "Sei stato bocciato!" << endl;
	}
}

void promosso_o_bocciato(string esito) {
	cout << esito;
}

int main() {
	int voti_interi[4] = { 25, 24, 22, 28 };
	double voti_reali[4] = { 25.3, 24.1, 21.9, 28.1 };
	int voto_intero = calcola_voto_esame(voti_interi);
	double voto_reale = calcola_voto_esame(voti_reali);

	cout << "Voto approssimato: " << voto_intero << endl;
	cout << "Voto reale: " << voto_reale << endl;

	promosso_o_bocciato("Sei stato promosso!");
}
