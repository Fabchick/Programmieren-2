#pragma once

#include "Hase.h"
#include "Igel.h"
#include "Spielfigur.h"
#include "Spielfeld.h"

class Spiel
{
private:
	Spielfeld *EreignisP;
	Spielfigur **figur;
	int ziel = 0;
	int anzFig = 0;
	int x = 0;
	char auswahl = 0;
	int Ereignis = 0;
	int keinTriggern = 0;

public:
	
	int getZiel();
	int wuerfle();
	void macheZug();
	bool getStand();
	Spiel(int anzFelder);
	~Spiel();
};

