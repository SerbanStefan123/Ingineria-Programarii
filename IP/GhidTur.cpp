#include "GhidTur.h"


GhidTur::GhidTur(string nume, string prenume)
{
	this->nume = nume;
	this->prenume = prenume;
}

GhidTur::GhidTur()
{
	this->nume = "";
	this->prenume = "";
}


GhidTur::~GhidTur()
{
	this->nume = "";
	this->prenume = "";
}
