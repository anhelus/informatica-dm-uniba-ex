#include "persona.h"
#include "contratti.h"
#include <iostream>
#include <vector>
#include <map>

using namespace Persone;
using namespace std;

int main() {
	Persona truce("Truce", "Baldazzi", 18);
	Persona piero("Piero", "Scamarcio", 19);

	vector<Persona> persone = { piero, truce };
	
	// Iterazione conoscendo la lunghezza del vettore
	cout << "Conosco la lunghezza del vettore, quindi la uso" << endl;
	for (int i = 0; i < 2; i++) {
		cout << persone[i];
	}

	// Uso il metodo insert mediante l'iterator restituito dal metodo begin()
	Persona ivo("Ivo", "Avido", 99);
	persone.insert(persone.begin(), ivo);

	cout << "Voglio svincolarmi dalla lunghezza del vettore, uso la funzione size()" << endl;
	for (int i = 0; i < persone.size(); i++) {
		cout << persone[i];
	}

	// Operazioni su studente
	Studente cardellicchio("Angelo", "Cardellicchio", 35, 543114);
	cardellicchio.aggiungiVoto("Informatica", 18);
	cardellicchio.aggiungiVoto("Analisi 1", 30);
	map<string,int> libretto = cardellicchio.getLibretto();

	cout << endl << "Voti di: " << cardellicchio << endl;
	for (map<string, int>::iterator it = libretto.begin(); it != libretto.end(); it++) {
		cout << it->first << ": " << it->second << endl;
	}

	// Operazioni su personale
	Contratti::TipoContratto docente("Docente a contratto", 1000000);
	Personale cardellicchioDocente("Angelo", "Cardellicchio", 35, 0, docente);
	cout << cardellicchioDocente << docente << endl;

	return 0;
}