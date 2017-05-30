#pragma once

#include "Spielfigur.h"

class Igel : public Spielfigur
{
private:
	int salat = 10;
	int position = 0;
	int warten = 0;
	int letzterZug = 0;

public:
	bool ziehe(int felder);
	int getPosition();
	int getSalat();
	int getVorrat();



	Igel();
	~Igel();
};

