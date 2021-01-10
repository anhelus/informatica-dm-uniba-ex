#include <iostream>
#ifndef GEOMETRIA_H
#define GEOMETRIA_H

using namespace std;

namespace Geometria {
	class Vettore;
	Vettore operator+(Vettore& right, double left);
	Vettore operator+(double right, Vettore& left);
	//Vettore operator+(Vettore& right, double modulo);
	ostream& operator<<(ostream& output, Vettore& vettore);
	istream& operator>>(istream& input, Vettore& vettore);
}

class Geometria::Vettore {
private:
	double modulo;
	double angolo;
	static int origine;
	//double* puntatore;
public:
	Vettore();
	Vettore(double modulo);
	Vettore(double modulo, double angolo);
	Vettore(const Vettore& altro);
	void setModulo(double modulo);
	void setAngolo(double angolo);
	double getModulo();
	double getAngolo();
	static int getOrigine();
	Vettore operator+(const Vettore& op);
};
#endif // !GEOMETRIA_H
