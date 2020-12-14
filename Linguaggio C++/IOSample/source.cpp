#include <iostream>
#include <string>

using namespace std;

void esempio_output() {
	cout << "Questo e' un messaggio in output\n";
	cerr << "Questo e' un messaggio di errore\n";
	clog << "Questo e' un messaggio di log\n";
	cout << "Concateno il numero: " << 2 << endl << endl;
}

void esempio_input() {
	int eta;
	string nome;
	cout << "Inserisci la tua eta' ed il tuo nome: ";
	cin >> eta >> nome;
	if (cin.good()) {
		cout << "Hai " << eta << " anni e ti chiami " << nome << endl;
	}
	else {
		cerr << "Errore!" << endl;
	}
}

void esempio_getline() {
	string nome;
	cout << "Inserisci il tuo nome completo: ";
	getline(cin, nome);
	if (cin.good()) {
		cout << "Il tuo nome e' " << nome;
	} 
	else {
		cerr << "Errore!" << endl;
	}
}

int main() {
	esempio_output();
	//esempio_input();
	esempio_getline();
}