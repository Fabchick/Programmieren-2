#pragma once

#include"Aktie.h"
#include"Beobachterziel.h"

#define MAX_AKTIEN 10

class Boerse : public Beobachterziel
{
private:
	Aktie *aktienP[MAX_AKTIEN];
	int anzAktien = 0;
public:
	void Add_aktie(Aktie &aktie);
	int Get_anzahl_aktien();
	Aktie *Get_aktie(int i);
	void Simulate();
//	void Anmelden(Beobachter* beobachter);
//	void Abmelden(Beobachter* beobachter);
//	void Benachrichtige_alle();
	Boerse();
	~Boerse();
};

