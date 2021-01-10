#include "ioutils.h"

/**
 * Determina se l'input proviene da file o riga di comando.
 *  
 * Restituisce la modalità di input specificata dall'utente.
 */
bool ioutils::is_file_input()
{
	string input_mode;
	while (true) {
		getline(cin, input_mode);
		// Controllo la lunghezza dell'input (deve essere unitaria)
		if (input_mode.length() == 1) {
			// Controllo la validità dell'input (deve essere f o r)
			if (input_mode == "f") {
				return true;
			}
			else if (input_mode == "r") {
				return false;
			}
			else {
				cout << "Input is not valid. Please try again." << endl;
				continue;
			}
		}
		else {
			cout << "Input length is not valid. Please try again." << endl;
			continue;
		}
	}
}

/** 
 * Legge il contenuto di un file e lo restituisce in una stringa.
 *
 * @param file_name nome del file da leggere
 */
string ioutils::read_file(string file_name)
{
	ifstream input(file_name);
	string vector_string;
	if (input.is_open()) {
		cout << "Lettura avvenuta con successo." << endl;
		string line;
		while (getline(input, line)) {
			vector_string.append(line);
		}
	}
	else {
		cout << "Errore nella lettura del file." << endl;
	}
	return vector_string;
}

/**
 * Stampa a schermo il contenuto di un array.
 * 
 * @param vect vettore da stampare a schermo
 */
void ioutils::print_array(vector<int> vect)
{
	for (vector<int>::iterator it = vect.begin(); it != vect.end(); ++it) {
		cout << *it << "\t";
	}
	cout << endl;
}

/**
 * Salva il contenuto di un array in un file.
 * 
 * @param file_name nome del file di output
 * @param vect array da salvare
 * @param delimiter delimitatore tra due elementi contigui
 * @param opener stringa di apertura
 * @param closer stringa di chiusura
 */
void ioutils::save_to_file(
	string file_name,
	vector<int> vect,
	string delimiter,
	string opener,
	string closer)
{
	ofstream output(file_name);
	if (output.is_open()) {
		if (output.good()) {
			output << opener;
		}
		vector<int>::iterator it = vect.begin();
		while (output.good() && it != vect.end()) {
			output << *it << delimiter;
			++it;
		}
		if (output.good()) {
			output << closer;
		}
	}
}

ioutils::SaveManager::SaveManager(string fileName, vector<int> vect, string delimiter, string opener, string closer)
{
	setFileName(fileName);
	setVect(vect);
	setDelimiter(delimiter);
	setOpener(opener);
	setCloser(closer);
}

void ioutils::SaveManager::setFileName(string fileName)
{
	this->fileName = fileName;
}

string ioutils::SaveManager::getFileName()
{
	return this->fileName;
}

void ioutils::SaveManager::setVect(vector<int> vect)
{
	this->vect = vect;
}

vector<int> ioutils::SaveManager::getVect()
{
	return this->vect;
}

void ioutils::SaveManager::setDelimiter(string delimiter)
{
	this->delimiter = delimiter;
}

string ioutils::SaveManager::getDelimiter()
{
	return this->delimiter;
}

void ioutils::SaveManager::setOpener(string opener)
{
	this->opener = opener;
}

string ioutils::SaveManager::getOpener()
{
	return string();
}

void ioutils::SaveManager::setCloser(string closer)
{
	this->closer = closer;
}

string ioutils::SaveManager::getCloser()
{
	return closer;
}

void ioutils::SaveManager::saveToFile()
{
	ofstream output(this->fileName);
	if (output.is_open()) {
		if (output.good()) {
			output << this->opener;
		}
		vector<int>::iterator it = vect.begin();
		while (output.good() && it != vect.end()) {
			output << *it << this->delimiter;
			++it;
		}
		if (output.good()) {
			output << this->closer;
		}
	}
}
