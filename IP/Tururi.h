#pragma once
#include "Participant.h"
#include "GhidTur.h"
#include "Participant.h"
struct Nod
{
	string locatie;
	Nod* next;
};

class Tururi
{
private:
	bool tip;
	GhidTur Ghid;
	Participant listaParticipanti[5];
	int nrParticipanti;
	Nod* itinerariu;
public:
	Tururi(bool tip);
	addGhid(GhidTur ghidd);
	addPartipanti(string nume, string prenume);
	addLocatie(string locatie);
	printTur();
	~Tururi();
};

