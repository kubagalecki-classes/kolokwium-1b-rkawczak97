#include "zad1.hpp"

#include <exception>
#include <vector>

// tutaj funkcja stworzZespol
stworzZespol(double a, std::string s){
  if(size(s) != a){
    std::logic_error = "error";
    throw(logic_error);
  }
  std::vector<Artysta> v(a);
  v.push_back(Artysta(s, 1));
  v.push_back(Artysta(s, 2)); 
  v.push_back(Artysta(s, 3));
  return v;  
}