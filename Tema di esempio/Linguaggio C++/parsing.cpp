#include "parsing.h"
#include <iostream>

parsing::Parser::Parser()
{
	setInput(string());
}

parsing::Parser::Parser(string input)
{
	setInput(input);
}

string parsing::Parser::getInput()
{
	return this->input;
}

void parsing::Parser::setInput(string input)
{
	this->input = input;
}

void parsing::Parser::strip(char to_strip)
{
	string output;
	for (string::iterator it = this->input.begin();
		it != this->input.end();
		++it) {
		if (*it != to_strip) {
			// Uso questa funzione perché dispone di un overload per i char
			output.push_back(*it);
			// In alternativa:
			// output.append(1, *it);
			// output += *it;
		}
	}
	setInput(output);
}

/* Non è la maniera più efficiente di procedere.
*/
void parsing::Parser::strip_multiple(vector<char> to_strip)
{
	for (vector<char>::iterator it = to_strip.begin(); it != to_strip.end(); ++it) {
		strip(*it);
	}
}

// TODO: check required, add docs
vector<int> parsing::Parser::parse_int_array(string delimiter)
{
	int i = 0;
	string helper = this->input;
	string token;
	vector<int> output;
	// TODO: check npos
	// Prendiamo tutti gli elementi fino all'ultimo delimitatore
	while ((i = helper.find(delimiter)) != string::npos) {
		token = helper.substr(0, i);
		helper.erase(0, i + delimiter.length());
		output.push_back(stoi(token));
	}
	// Necessario, altrimenti non ritroveremmo l'ultimo elemento
	output.push_back(stoi(helper));
	return output;
}
