#include "Tururi.h"
#include "Participant.h"
#include "GhidTur.h"

Tururi::Tururi(bool tip)
{
	this->nrParticipanti = 0;
	this->tip = tip;
	this->itinerariu = new Nod;
	this->itinerariu->next = NULL;
}

Tururi::addGhid(GhidTur ghidd)
{
	this->Ghid = ghidd;
}

Tururi::addPartipanti(string nume, string prenume)
{
	this->listaParticipanti[nrParticipanti].nume = nume;
	this->listaParticipanti[nrParticipanti].prenume = prenume;
	this->nrParticipanti++;
}

Tururi::addLocatie(string locatie)
{
	Nod* start = this->itinerariu;
	while (start->next != NULL)
		start = start->next;
	Nod* nouloc = new Nod;
	nouloc->locatie = locatie;
	nouloc->next = NULL;
	start->next = nouloc;
}
Tururi::printTur()
{

}
Tururi::~Tururi()
{

}
