#include "zad1.hpp"

#include <exception>
#include <vector>

// tutaj funkcja stworzZespol
std::vector<Artysta> stworzZespol(int a, const std::string& s){
  if(size(s) != a){
    std::logic_error e = "error";
    throw(e);
  }
  std::vector<Artysta> v;
  for(int i=1; i<a+1; ++i){
    v.push_back(Artysta(s, i))
  }
  return v;  
}
