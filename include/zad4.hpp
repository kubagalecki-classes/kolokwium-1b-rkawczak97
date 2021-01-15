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
  for(int i=1; i<a+1; ++i){
    v.push_back(s, i)
  }
  return v;  
}