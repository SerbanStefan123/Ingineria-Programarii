#pragma once
#include "Participant.h"
#include "GhidTur.h"
#include "Participant.h"

class Tururi
{
private:
	bool tip;
	GhidTur Ghid;
	Participant listaParticipanti[5];
	int nrParticipanti;
public:
	Tururi(bool tip);
	addGhid(GhidTur ghidd);
	addPartipanti(Participant parti);
	~Tururi();
};

