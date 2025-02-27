#include <iostream>
#include "Tururi.h"
#include "Participant.h"
#include "GhidTur.h"
using namespace std;
int main()
{
	Tururi tur1(0);
	GhidTur ghid1("Buj", "Teo");
	tur1.addGhid(ghid1);
	tur1.addPartipanti("Abc", "Def");
	tur1.addPartipanti("abbc", "acc");
	tur1.addLocatie("Munte");
}