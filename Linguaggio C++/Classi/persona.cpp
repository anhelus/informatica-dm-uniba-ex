#include "persona.h"
#include <iostream>

using namespace std;
using namespace Persona;

PersonaBase::PersonaBase() {
	setNome("Non definito");
	setCognome("Non definito");
	setEta(0);
}

PersonaBase::PersonaBase(string nuovoNome, string nuovoCognome, int nuovaEta) {
	setNome(nuovoNome);
	setCognome(nuovoCognome);
	setEta(nuovaEta);
}

string PersonaBase::getNome() {
	return nome;
}

string PersonaBase::getCognome() {
	return cognome;
}

int PersonaBase::getEta() {
	return eta;
}

void PersonaBase::setNome(string nuovoNome) {
	if (nuovoNome.length() > 2) {
		nome = nuovoNome;
	}
}

void PersonaBase::setCognome(string nuovoCognome) {
	if (nuovoCognome.length() > 2) {
		cognome = nuovoCognome;
	}
}

void PersonaBase::setEta(int nuovaEta) {
	if (nuovaEta >= 0) {
		eta = nuovaEta;
	}
}
