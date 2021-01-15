#pragma once

#include "zad1.hpp"

#include <cctype>

using namespace std;
// tutaj klasy PopGwiazda, RapGwiazda oraz funkcja stworzArtyste
class PopGwiazda : public Artysta {
public:
    PopGwiazda(const std::string& p, unsigned l) : Artysta(p, l) {}
    void graj(std::ostream& os) const override { os << "PopGwiazda: " << getPseudonim(); }
};

class RapGwiazda : public Artysta {
public:
    RapGwiazda(const std::string& p, unsigned l) : Artysta(p, l) {}
    void graj(std::ostream& os) const override { os << "RapGwiazda: " << getPseudonim(); }
};

Artysta* stworzArtyste(const std::string& str)
{
    if (str.front() == std::toupper(str.front()))
        return new PopGwiazda{"BTS", 1234};
    else
        return new RapGwiazda{"Ye", 4321};
}