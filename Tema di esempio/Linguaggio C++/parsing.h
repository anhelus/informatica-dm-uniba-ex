#ifndef PARSING_H
#define PARSING_H
#include <iostream>
#include <string>
#include <vector>

using namespace std;

namespace parsing {
	class Parser;
};

class parsing::Parser {
private:
	string input;
public:
	Parser();
	Parser(string input);
	string getInput();
	void setInput(string input);
	void strip(char to_strip);
	void strip_multiple(vector<char> to_strip);
	vector<int> parse_int_array(string delimiter = ",");
};

#endif // !PARSING_H