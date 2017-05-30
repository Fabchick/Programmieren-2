#include "Hase.h"

#include <iostream>

using namespace std;

int Hase::getVorrat()
{
	if (karotten > 0)
		cout << "besitzt noch " << karotten << " Karotte(n).";
	else
		cout << "hat keine Karotten mehr.";
	return(karotten);
}

int Hase::getPosition()
{
	return(position);
}

bool Hase::ziehe(int felder)
{
	if (felder == 7)								//Ereignis 1
	{
		karotten += letzterZug;
		return(true);
	}

	if (felder == 9)								//Ereignis 3
	{
		position -= 3;
		karotten += 30;
		if (position == -1)
		{
			position = 0;
			karotten -= 10;
		}
		if (position == -2)
		{
			position = 0;
			karotten -= 20;
		}
		return(true);
	}

	cout << "wuerfelt eine: " << felder;
	int abzug = 0;

	switch (felder)
	{
	case 1: abzug = 1; break;
	case 2: abzug = 3; break;
	case 3: abzug = 6; break;
	case 4: abzug = 10; break;
	case 5: abzug = 15; break;
	case 6: abzug = 21; break;
	}

	if (karotten >= abzug)
	{
		position += felder;
		karotten -= abzug;
		letzterZug = abzug;
		return(true);
	}

	if (fehlversuche == 3)
	{
		cout << " -JETZT SPRINGT IHR HASE EIN MAL ZURUECK, UM KAROTTEN ZU HOLEN";
	
		position -= felder;
		karotten += felder * 10;

		letzterZug = -felder * 10;
		fehlversuche = 0;

		return(true);
	}
	else
		cout << " -NICHT GENUEGEND KAROTTEN FUER DIESEN WURF. FEHLVERSUCH NR.: " << fehlversuche;

	fehlversuche++;

	return(false);
}

int Hase::getKarotten()
{
	return(fehlversuche);
}

Hase::Hase()
{
}
Hase::~Hase()
{
}
