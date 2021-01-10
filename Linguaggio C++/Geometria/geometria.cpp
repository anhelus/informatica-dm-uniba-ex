#include "geometria.h"
#include <cmath>

using namespace Geometria;

Vettore::Vettore()
{
	setModulo(0);
	setAngolo(0);
	//this->puntatore = new double;
}

Vettore::Vettore(double modulo)
{
	setModulo(modulo);
	setAngolo(0.0);
	//this->puntatore = new double;
}

Vettore::Vettore(double modulo, double angolo)
{
	setModulo(modulo);
	setAngolo(angolo);
	//this->puntatore = new double;
}

Vettore::Vettore(const Vettore& altro)
{
	setModulo(altro.modulo);
	setAngolo(altro.angolo);
	// Esempio di deep copy
	/*puntatore = new double;
	if (altro.puntatore != nullptr) {
		*puntatore = *(altro.puntatore);
	}*/
}

double Vettore::getModulo() {
	return modulo;
}

double Vettore::getAngolo() {
	return angolo;
}

int Geometria::Vettore::getOrigine()
{
	return origine;
}

void Vettore::setModulo(double nModulo) {
	modulo = nModulo;
}

void Vettore::setAngolo(double angolo) {
	this->angolo = angolo;
}

Vettore Vettore::operator+(const Vettore& op) {
	double res_angolo = abs(this->angolo - op.angolo);
	double norma = (this->modulo * this->modulo) + (op.modulo * op.modulo) - (2 * this->modulo * op.modulo * cos(this->angolo));
	return Vettore(sqrt(norma), (this->angolo + op.angolo) / 2);
}

Vettore Geometria::operator+(Vettore& right, double left)
{
	return Vettore(right.getModulo() + left, right.getAngolo());
}

Vettore Geometria::operator+(double right, Vettore& left)
{
	return Vettore(left.getModulo() + right, left.getAngolo());
}

//Vettore Geometria::operator+(Vettore& right, double modulo)
//{
//	return Vettore(right.getModulo() + modulo, right.getAngolo());
//}

ostream& Geometria::operator<<(ostream& output, Vettore& vettore)
{
	cout << "Modulo: " << vettore.getModulo() << " Angolo: " << vettore.getAngolo();
	return output;
}

istream& Geometria::operator>>(istream& input, Vettore& vettore)
{
	double modulo;
	double angolo;
	input >> modulo >> angolo;
	vettore.setModulo(modulo);
	vettore.setAngolo(angolo);
	return input;
}
