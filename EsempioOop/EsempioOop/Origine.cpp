#include <string>
#include <iostream>

using namespace std;

class Persona
{
private:
	string nome, cognome;
	int eta;

public:
	Persona() {
		nome = "";
		cognome = "";
		eta = 0;
	}

	Persona(string nome, string cognome, int eta) {
		this->nome = nome;
		this->cognome = cognome;
		this->eta = eta;
	}

	void setNome(string nome) {
		this->nome = nome;
	}

	void setCognome(string cognome) {
		this->cognome = cognome;
	}

	void setEta(int eta) {
		this->eta = eta;
	}

	string getNome() {
		return this->nome;
	}

	string getCognome() {
		return this->cognome;
	}

	int getEta() {
		return this->eta;
	}
};

class Studente : public Persona
{
private:
	int matricola;
public:
	Studente(string nome, string cognome, int eta, int matricola) {
		s
	}
};

int main() {
	Persona piero_scamarcio("Piero", "Scamarcio", 18);
	Persona truce_baldazzi("Truce", "Baldazzi", 19);

	cout << "Prima persona - Nome: " << piero_scamarcio.getNome() << " - Cognome: " << piero_scamarcio.getCognome() << " - Eta: " << piero_scamarcio.getEta() << "\n";
	cout << "Prima persona - Nome: " << truce_baldazzi.getNome() << " - Cognome: " << truce_baldazzi.getCognome() << " - Eta: " << truce_baldazzi.getEta() << "\n";
}
