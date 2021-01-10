#ifndef CONTRATTI_H
#define CONTRATTI_H
#include <string>

using namespace std;

namespace Contratti {
	class TipoContratto;
	ostream& operator<<(ostream& output, TipoContratto& tipoContratto);
}

class Contratti::TipoContratto {
private:
	string denominazione;
	int retribuzione;
public:
	TipoContratto();
	TipoContratto(string denominazione, int retribuzione);
	TipoContratto(const TipoContratto& altro);
	TipoContratto& operator=(TipoContratto& altro);
	string getDenominazione() const;
	int getRetribuzione() const;
	void setDenominazione(string denominazione);
	void setRetribuzione(int retribuzione);
};

#endif // !CONTRATTI_H
