#include "Tururi.h"
#include "Participant.h"
#include "GhidTur.h"

Tururi::Tururi(bool tip)
{
	this->nrParticipanti = 0;
	this->tip = tip;
}

Tururi::addGhid(GhidTur ghidd)
{
	this->Ghid = ghidd;
}

Tururi::addPartipanti(Participant parti)
{
	this->listaParticipanti[nrParticipanti] = parti;
	this->nrParticipanti++;
}

Tururi::~Tururi()
{

}
