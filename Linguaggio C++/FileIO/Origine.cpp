#include <fstream>
#include <iostream>

using namespace std;

int main() {
	ifstream input("input.txt");
	if (input.is_open()) {
		ofstream output("output.txt");
		if (output.is_open()) {
			char c = NULL;
			while (input.get(c) && output.good()) {
				if (output.put(c)) {
					cout << "Carattere " << c << " copiato" << endl;
				}
				else {
					cout << "Impossibile copiare il carattere " << c << endl;
					exit(EXIT_FAILURE);
				}
			}
			output.close();
		}
		else {
			cout << "Errore di I/O sul file di output." << endl;
		}
		input.close();
	}
	else {
		cout << "Errore di I/O sul file di input." << endl;
	}
}
