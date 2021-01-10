#include <iostream>

using namespace std;

namespace cartesiano {
	void calcola_distanza() {
		cout << "Distanza cartesiana" << endl;
	}
}

namespace polare {
	void calcola_distanza() {
		cout << "Distanza polare" << endl;
	}
}

int main() {
	cartesiano::calcola_distanza();
	polare::calcola_distanza();
}
