#ifndef GEOMETRIA_H
#define GEOMETRIA_H
namespace Geometria {
	class Vettore;
}

class Geometria::Vettore {
private:
	double modulo;
	double angolo;
public:
	Vettore();
	Vettore(double modulo, double angolo);
	void setModulo(double modulo);
	void setAngolo(double angolo);
	double getModulo();
	double getAngolo();
	Vettore operator+(const Vettore& op);
};
#endif // !GEOMETRIA_H
