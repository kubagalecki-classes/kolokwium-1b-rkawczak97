#pragma once

#include "catch.hpp"

#include <ostream>
#include <sstream>
#include <string>

using namespace std;
// tutaj klasa Artysta
class Artysta {
public:
    Artysta() : pseudonim{"Anonim"}, liczba_sluchaczy{0} {}
    Artysta(const std::string& p, unsigned l) : pseudonim{p}, liczba_sluchaczy{l} {}

    virtual void graj(std::ostream& os) const
    {
        os << pseudonim << ": " << liczba_sluchaczy;
    }

    const std::string& getPseudonim() const {return pseudonim;}
    unsigned getSluchacze() const {return liczba_sluchaczy;}

private:
    string pseudonim;
    unsigned liczba_sluchaczy; 
};

