#pragma once
#include "Punkt.h"

class Pfad
{
private:
	int i = 0;
	int anzPunkte = 0;
	Punkt punkte[100];
public:
	void insertKoord(Punkt &p);
	void printKoord(int i);
	Pfad(int anzPunkte);
	Pfad();
	~Pfad();
};
