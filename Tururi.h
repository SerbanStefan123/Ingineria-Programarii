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
	Tururi(GhidTur Ghid,Participant listaP[5],bool tip);
	~Tururi();
};

