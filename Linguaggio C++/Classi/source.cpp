#include "persona.h"
#include <iostream>

using namespace Persona;
using namespace std;

int main() {
	PersonaBase truce;
	truce.setNome("Truce");
	truce.setCognome("Baldazzi");
	truce.setEta(18);

	cout << "Nome: " << truce.getNome() << "\tCognome: " << truce.getCognome() << "\tEta': " << truce.getEta() << endl;

	PersonaBase piero("Piero", "Scamarcio", 18);
	cout << "Nome: " << piero.getNome() << "\tCognome: " << piero.getCognome() << "\tEta': " << piero.getEta() << endl;

	return 0;
}