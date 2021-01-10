#ifndef IOUTILS_H
#define IOUTILS_H
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

namespace ioutils {
	bool is_file_input();
	string read_file(string file_name);
	void print_array(vector<int> vect);
	class SaveManager;
	void save_to_file(
		string file_name,
		vector<int> vect,
		string delimiter = " ,",
		string opener = "[",
		string closer = "]");
}

class ioutils::SaveManager {
private:
	string fileName;
	vector<int> vect;
	string delimiter;
	string opener;
	string closer;
public:
	SaveManager(string fileName, vector<int> vect, string delimiter=",", string opener="[", string closer="]");
	void setFileName(string fileName);
	string getFileName();
	void setVect(vector<int> vect);
	vector<int> getVect();
	void setDelimiter(string delimiter);
	string getDelimiter();
	void setOpener(string opener);
	string getOpener();
	void setCloser(string closer);
	string getCloser();
	void saveToFile();
};

#endif // !IOUTILS.H
