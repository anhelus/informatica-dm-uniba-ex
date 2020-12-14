#include <iostream>

using namespace std;

int main() {
	// Dichiaro una variabile reference
	int a = 2;
	int* pa = &a;
	int& ref_a = a;

	int b = 4;
	ref_a = b;
	//int& ref_b;

	cout << "Accesso al valore di a mediante dereferenziazione: " << *pa << endl;
	cout << "Accesso al valore di a mediante variabile reference: " << ref_a << endl;
}