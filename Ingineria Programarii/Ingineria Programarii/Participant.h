#pragma once
#include <string>
using namespace std;

class Participant
{
private:
	string nume, prenume;
	int varsta;
public:
	int getVarsta() { return this->varsta; };
	string getNume() { return this->nume;  };
	string getPrenume() { return this->prenume; };
	Participant(string nume, string prenume,int varsta);
	Participant();
	~Participant();
};

