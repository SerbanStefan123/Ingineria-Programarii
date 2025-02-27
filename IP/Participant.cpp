#include "Participant.h"
#include <string>
using namespace std;

Participant::Participant(string nume, string prenume, int varsta)
{
	this->nume = nume;
	this->prenume = prenume;
	this->varsta = varsta;
}

Participant::Participant()
{
	this->nume = "";
	this->prenume = "";
	this->varsta = 0;
}

Participant::~Participant()
{
	this->nume = "";
	this->prenume = "";
	this->varsta = 0 ;
}
