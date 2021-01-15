#pragma once

#include "zad1.hpp"

//tutaj szablon ArtystaPlusInstrument
template<class T>
class ArtystaPlusInstrument {
public:
	ArtystaPlusInstrument(const Artysta& A, const& T t) : a(A), i(t) {}
	unsigned koncert(){ return i.liczbaUczestnikow(a); }
private:
	Artysta a;
	T i;
};