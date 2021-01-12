#include "ioutils.h"
#include "parsing.h"
#include "sorting.h"

using namespace ioutils;
using namespace parsing;
using namespace sorting;

int main() {
	// Scelgo il tipo di input
	cout << "Enter 'f' to use a text file, or 'r' to use shell: " << endl;
	string vector_string;

	if (ioutils::is_file_input()) {
		// Leggo l'array da file
		string file_name;
		cout << "Please enter file name: " << endl;
		cin >> file_name;
		vector_string = ioutils::read_file(file_name);
	}
	else {
		// Leggo l'array da shell
		cout << "Please enter array values: " << endl;
		cin >> vector_string;
	}

	vector<int> values;
	try {
		// Parsing dell'array
		Parser parser(vector_string);
		vector<char> to_remove = { '[', ']', '{', '}' };
		parser.strip_multiple(to_remove);
		values = parser.parse_int_array();
	}
	catch (invalid_argument exc) {
		cout << "Array values format is not valid! Please try again." << endl;
		exit(EXIT_FAILURE);
	}

	print_array(values);
	// Selection sort
	Sorter sort_helper(values);
	sort_helper.selectionSort();
	print_array(sort_helper.getVector());

	// Salva su file
	string save;
	cout << "Save results on a file? Select Y or N." << endl;
	cin >> save;
	if (save == "Y") {
		string fileName;
		cout << "Please enter file name. " << endl;
		cin >> fileName;
		save_to_file(fileName, values);
	}
}