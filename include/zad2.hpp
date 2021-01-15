#pragma once

#include "zad1.hpp"

#include <cctype>

using namespace std;
// tutaj klasy PopGwiazda, RapGwiazda oraz funkcja stworzArtyste
class PopGwiazda: public Artysta{
public:
	PopGwiazda() {};
	PopGwiazda(const string& p, const unsigned& l) : pseudonim(p), liczba_sluchaczy(l) {}
	void graj(std::ostream& os) const {
		os << "PopGwiazda: " << this->pseudonim;
	}
private:
	string pseudonim;
	unsigned liczba_sluchaczy;
};

class RapGwiazda : public Artysta {
public:
	RapGwiazda() {};
	RapGwiazda(const string& p, const unsigned& l) : pseudonim(p), liczba_sluchaczy(l) {}
	void graj(std::ostream& os) const {
		os << "PopGwiazda: " << this->pseudonim;
	}
private:
	string pseudonim;
	unsigned liczba_sluchaczy;
};

Artysta* stworzArtyste(string& str) {
	if (str.front() == toupper(str.front())) {
		return new PopGwiazda("BTS", 1234);
	}
	else {
		return new RapGwiazda("Ye", 4321);
	}
}