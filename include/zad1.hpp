#pragma once

#include "catch.hpp"

#include <ostream>
#include <sstream>
#include <string>

using namespace std;
// tutaj klasa Artysta
class Artysta 
{
public:
    Artysta() { this->pseudonim = "Anonim"; this->liczba_sluchaczy = 0; }
    Artysta(const std::string& p, unsigned l) : pseudonim(p), 
    ~Artysta() {}
    liczba_sluchaczy(l) {}
    virtual void graj(std::ostream& os) const {
        os << this->pseudonim << ": " << this->liczba_sluchaczy;
    }
    const std::string& getPseudonim() const
    {
        return this->pseudonim;
    }
    unsigned getSluchacze() const
    {
        return this->liczba_sluchaczy;
    }
private:
    string pseudonim;
    unsigned liczba_sluchaczy;
};

