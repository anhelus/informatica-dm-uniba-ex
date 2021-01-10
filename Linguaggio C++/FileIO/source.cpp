#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void char_copy(ifstream& input, ofstream& output) {
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
}

void row_copy(ifstream& input, ofstream& output) {
	string line;
	int row = 1;
	while (getline(input, line) && output.good()) {
		output << line << endl;
		cout << "Linea " << row << " copiata" << endl;
		row++;
	}
}

int main() {
	cout << "Inserire 0 per lettura riga a riga, ed 1 per lettura carattere per carattere." << endl;
	bool char_or_row = false;
	cin >> char_or_row;
	ifstream input("input.txt");
	if (input.is_open()) {
		ofstream output("output.txt");
		if (output.is_open()) {
			if (char_or_row) {
				char_copy(input, output);
			}
			else {
				row_copy(input, output);
			}
		}
		else {
			cout << "Errore di I/O sul file di output." << endl;
			exit(EXIT_FAILURE);
		}
		input.close();
	}
	else {
		cout << "Errore di I/O sul file di input." << endl;
		exit(EXIT_FAILURE);
	}
	exit(EXIT_SUCCESS);
}
