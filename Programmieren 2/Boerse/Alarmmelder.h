#pragma once

#include"Beobachter.h"
#include"Beobachterziel.h"
#include"Boerse.h"

#define MAX_AKTIEN 10

class Alarmmelder : public Beobachter
{
private:
	Boerse *boerseP;
	int anfangsKursArray[MAX_AKTIEN];
public:
	Alarmmelder(Boerse* boerse);
	void Aktualisiere(Beobachterziel* BeobachterzielP);
	~Alarmmelder();
};

