#ifndef PERSONA_H
#define PERSONA_H
#include <string>

using namespace std;

namespace Persona
{
	class PersonaBase;
}

class Persona::PersonaBase
{
private:
	string nome;
	string cognome;
	int eta;
public:
	PersonaBase();
	PersonaBase(string nuovoNome, string nuovoCognome, int nuovaEta);
	string getNome();
	string getCognome();
	int getEta();
	void setNome(string nuovoNome);
	void setCognome(string nuovoCognome);
	void setEta(int nuovaEta);
};

#endif // !PERSONA_H
