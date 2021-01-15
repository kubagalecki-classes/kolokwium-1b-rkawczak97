#pragma once

#include "catch.hpp"

#include <ostream>
#include <sstream>
#include <string>

using namespace std;
// tutaj klasa Artysta
class Artysta {
	Artysta(){
    this-> pseudonim = "Artysta";
    this-> liczba_sluchaczy = 0;
  }
	Artysta(const std::string& _psedonim, unsigned _liczba_sluchaczy) : pseudonim(_psedonim), liczba_sluchaczy(_liczba_sluchaczy) {}
	~Artysta() {}

	void graj(std::ostream& os) const {
		os << this->pseudonim << ": " << this->liczba_sluchaczy;
	}

	const std::string& getPseudonim() const { return this->pseudonim; }
	unsigned getSluchacze() const { return this->liczba_sluchaczy; }

private:
	std::string pseudonim;
	unsigned liczba_sluchaczy;
};

