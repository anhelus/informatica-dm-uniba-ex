#include "geometria.h"
#include <iostream>

using namespace Geometria;
using namespace std;

int main() {
	
	Vettore v1(10.0, 60.0);
	Vettore v2(5.0, 30.0);
	Vettore v3 = v1 + v2;
	cout << v3.getModulo() << " " << v3.getAngolo() << endl;

	// Prova 
	//Vettore v4 = v1 + 5;
	//Vettore v5 = 5 + v1;

	//cout << v5 << endl;

	//Vettore v6;
	//cout << "Inserire modulo ed angolo per il nuovo vettore:" << endl;
	//cin >> v6;
	//cout << v6 << endl;

	//Vettore v7 = v6;
	//cout << v7 << endl;

	//// Allocazione dinamica
	//Vettore* vp = new Vettore(15, 90);
	//cout << "Vettore allocato dinamicamente: " << *vp << endl;
	//delete vp;
	//cout << "Vettore deallocato." << endl;
	return 0;
}