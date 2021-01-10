#include "contratti.h"
#include <iostream>

Contratti::TipoContratto::TipoContratto()
{
	setDenominazione("");
	setRetribuzione(0);
}

Contratti::TipoContratto::TipoContratto(string denominazione, int retribuzione)
{
	setDenominazione(denominazione);
	setRetribuzione(retribuzione);
}

Contratti::TipoContratto::TipoContratto(const TipoContratto& altro)
{
	setDenominazione(altro.getDenominazione());
	setRetribuzione(altro.getRetribuzione());
}

Contratti::TipoContratto& Contratti::TipoContratto::operator=(TipoContratto& altro)
{
	setDenominazione(altro.getDenominazione());
	setRetribuzione(altro.getRetribuzione());
	return *this;
}

string Contratti::TipoContratto::getDenominazione() const
{
	return this->denominazione;
}

int Contratti::TipoContratto::getRetribuzione() const
{
	return this->retribuzione;
}

void Contratti::TipoContratto::setDenominazione(string denominazione)
{
	this->denominazione = denominazione;
}

void Contratti::TipoContratto::setRetribuzione(int retribuzione)
{
	this->retribuzione = retribuzione;
}

ostream& Contratti::operator<<(ostream& output, TipoContratto& tipoContratto)
{
	cout << tipoContratto.getDenominazione()
		<< " Salario: "
		<< tipoContratto.getRetribuzione()
		<< endl;
	return output;
}
