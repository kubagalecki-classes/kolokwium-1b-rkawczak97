#pragma once

#include "catch.hpp"

#include <ostream>
#include <sstream>
#include <string>

// tutaj klasa Artysta
class Artysta {
	Artysta() : pseudonim("Anonim") {};
	Artysta(const std::string& _psedonim, unsigned _liczba_sluchaczy) :
		pseudonim(_psedonim), liczba_sluchaczy(_liczba_sluchaczy) {};
	~Artysta() {};

	void graj(std::ostream& os) const {
		os << this->pseudonim << ":" << this->liczba_sluchaczy;
	}

	const std::string& getPseudonim() const { return pseudonim; }
	unsigned getSluchacze() const { return liczba_sluchaczy; }

private:
	std::string pseudonim;
	unsigned liczba_sluchaczy;
};