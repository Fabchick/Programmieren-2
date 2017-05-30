#pragma once

#include "Spielfigur.h"

class Hase : public Spielfigur
{
private:
	int karotten = 31;
	int position = 0;
	int fehlversuche = 0;
	int letzterZug = 0;

public:
	int getVorrat();
	int getPosition();
	bool ziehe(int felder);
	int getKarotten();
	

	Hase();
	~Hase();
};

