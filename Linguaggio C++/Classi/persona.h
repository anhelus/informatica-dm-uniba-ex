#ifndef PERSONA_H
#define PERSONA_H
#include "contratti.h"
#include <string>
#include <vector>
#include <map>

using namespace std;

namespace Persone
{
	class Persona;
	ostream& operator<<(ostream& output, Persona& persona);
	class Studente;
	ostream& operator<<(ostream& output, Studente& studente);
	class Personale;
	ostream& operator<<(ostream& output, Personale& personale);
}

class Persone::Persona
{
protected:
	string nome;
	string cognome;
	int eta;
public:
	Persona();
	Persona(string nuovoNome, string nuovoCognome, int nuovaEta);
	Persona(const Persona& altra);
	Persona& operator=(const Persona& altra);
	// Getter
	string getNome() const;
	string getCognome() const;
	int getEta() const;
	// Setter
	void setNome(string nuovoNome);
	void setCognome(string nuovoCognome);
	void setEta(int nuovaEta);
};

class Persone::Studente : public Persona
{
protected:
	int matricola;
	map<string, int> libretto;
public:
	Studente();
	Studente(string nome, string cognome, int eta, int matricola);
	int getMatricola();
	map<string, int> getLibretto();
	void setMatricola(int matricola);
	void setLibrettoVuoto();
	void aggiungiVoto(string materia, int voto);
};

class Persone::Personale : public Persona
{
protected:
	int matricola;
	Contratti::TipoContratto tipoContratto;
public:
	Personale();
	Personale(string nome, string cognome, int eta, int matricola, Contratti::TipoContratto tipoContratto);
	int getMatricola();
	Contratti::TipoContratto getTipoContratto();
	void setMatricola(int matricola);
	void setTipoContratto(Contratti::TipoContratto tipoContratto);
};

#endif // !PERSONA_H
