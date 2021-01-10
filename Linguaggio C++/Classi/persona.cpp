#include "persona.h"
#include <iostream>

using namespace std;

// Persona
// Costruttore di default
Persone::Persona::Persona() {
	setNome("Non definito");
	setCognome("Non definito");
	setEta(0);
}
// Costruttore parametrizzato
Persone::Persona::Persona(string nuovoNome, string nuovoCognome, int nuovaEta) {
	setNome(nuovoNome);
	setCognome(nuovoCognome);
	setEta(nuovaEta);
}
// Costruttore di copia
Persone::Persona::Persona(const Persona& altra)
{
	setNome(altra.getNome());
	setCognome(altra.getCognome());
	setEta(altra.getEta());
}
// Operatore di assegnazione in overload
Persone::Persona& Persone::Persona::operator=(const Persona& altra)
{
	setNome(altra.getNome());
	setCognome(altra.getCognome());
	setEta(altra.getEta());
	return *this;
}
// Getter
// Nota: si usa il this per uniformità, ma può essere omesso
string Persone::Persona::getNome() const {
	return this->nome;
}

string Persone::Persona::getCognome() const {
	return this->cognome;
}

int Persone::Persona::getEta() const {
	return eta;
}

// Setter
void Persone::Persona::setNome(string nome) {
	if (nome.length() > 2) {
		this->nome = nome;
	}
}

void Persone::Persona::setCognome(string cognome) {
	if (cognome.length() > 2) {
		this->cognome = cognome;
	}
}

void Persone::Persona::setEta(int eta) {
	if (eta >= 0) {
		this->eta = eta;
	}
}

ostream& Persone::operator<<(ostream& output, Persona& persona)
{
	cout << persona.getNome() << " " << persona.getCognome() << " - " << persona.getEta() << endl;
	return output;
}
ostream& Persone::operator<<(ostream& output, Studente& studente)
{
	cout << studente.getNome() 
		<< " " << studente.getCognome() 
		<< " - " << studente.getMatricola() << endl;
	return output;
}
ostream& Persone::operator<<(ostream& output, Personale& personale)
{
	cout << personale.getNome()
		<< " "
		<< personale.getCognome()
		<< endl;
	return output;
}
// Studente
Persone::Studente::Studente() : Persona()
{
	matricola = 0;
	setLibrettoVuoto();
}

Persone::Studente::Studente(string nome, string cognome, int eta, int matricola) : Persona(nome, cognome, eta)
{
	setMatricola(matricola);
	setLibrettoVuoto();
}

int Persone::Studente::getMatricola()
{
	return this->matricola;
}

map<string, int> Persone::Studente::getLibretto()
{
	return this->libretto;
}

void Persone::Studente::setMatricola(int matricola)
{
	this->matricola = matricola;
}

void Persone::Studente::setLibrettoVuoto()
{
	this->libretto = {};
}

void Persone::Studente::aggiungiVoto(string materia, int voto)
{
	this->libretto.insert(pair<string, int>(materia, voto));
}

Persone::Personale::Personale()
{
	Contratti::TipoContratto* contratto = new Contratti::TipoContratto();
	setMatricola(0);
	setTipoContratto(*contratto);
}

Persone::Personale::Personale(string nome, string cognome, int eta, int matricola, Contratti::TipoContratto tipoContratto) : Persona(nome, cognome, eta)
{
	setMatricola(matricola);
	setTipoContratto(tipoContratto);
}

int Persone::Personale::getMatricola()
{
	return this->matricola;
}

Contratti::TipoContratto Persone::Personale::getTipoContratto()
{
	return this->tipoContratto;
}

void Persone::Personale::setMatricola(int matricola)
{
	if (matricola >= 0) {
		this->matricola = matricola;
	}
}

void Persone::Personale::setTipoContratto(Contratti::TipoContratto tipoContratto)
{
	this->tipoContratto = tipoContratto;
}
