#include "Spiel.h"

#include <conio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

using namespace std;

int Spiel::getZiel()
{
	return(ziel);
}

int Spiel::wuerfle()
{
	int würfel = rand() % 6 + 1;
	return(würfel);
}

void Spiel::macheZug()
{
	for (int x = 0; x < anzFig; x++)
	{
		cout << endl << "Figur #" << x << ": ";
		figur[x]->ziehe(wuerfle());
	}
	for (int x = 0; x < anzFig; x++)									//Ereignisse
	{
		keinTriggern = 0;
		if (EreignisP->getFeld(figur[x]->getPosition()) == 1)
		{
			cout << endl << endl << "Figur #" << x << ": steht auf einem Ereignisfeld. Er bekommt seinen Vorrat zurueck!";
			figur[x]->ziehe(7);
		}
		if (EreignisP->getFeld(figur[x]->getPosition()) == 2)
		{
			cout << endl << endl << "Figur #" << x << ": steht auf einem Ereignisfeld. Er darf nochmal wuerfeln!";
			cout << endl << "Figur #" << x << ": ";
			figur[x]->ziehe(wuerfle());
			keinTriggern = 1;
		}
		if ((EreignisP->getFeld(figur[x]->getPosition()) == 3 ) && (keinTriggern==0))
		{
			cout << endl << endl << "Figur #" << x << ": steht auf einem Ereignisfeld. Er geht drei Felder zurueck!";
			figur[x]->ziehe(9);
		}
	}
}

bool Spiel::getStand()
{
	for (int x = 0; x < anzFig; x++)
	{
		cout << endl << "Figur #" << x << " befindet sich auf POSITION: " << figur[x]->getPosition();
	}

	for (int x = 0; x < anzFig; x++)
	{
		if (figur[x]->getPosition() >= ziel)
		{
			cout << endl << endl << "Figur #" << x << " ist ins Ziel gekommen.";
		}
	}

	for (int x = 0; x < anzFig; x++)
	{
		if (figur[x]->getPosition() >= ziel)
		{
			return(true);
		}
	}

	return(false);
}

Spiel::Spiel(int anzFelder)
{
	cout << "Wieviele Spielfiguren soll Spiel besitzen?  ";			//Spielfiguren initialisierung
	cin >> anzFig;

	figur = new Spielfigur*[anzFig];

	for (int x = 0; x < anzFig; x++)
	{
		cout << endl << "Figur #" << x << ": soll ein neuer Hase(h) oder ein neuer Igel(i) fuer Sie geboren werden?    ";
		auswahl = _getche();

		if (auswahl == 'h')
			figur[x] = new Hase;
		if (auswahl == 'i')
			figur[x] = new Igel;
	}

	ziel = anzFelder;
	EreignisP = new Spielfeld(ziel);						//Ereignisfelder init

	while (getStand() == false)								// Der Ablauf(Schleife) des Spiels
	{
		for (int x = 0; x < anzFig; x++)
		{
			cout << endl << "Figur #" << x << " ";
			figur[x]->getVorrat();
		}


		cout << endl << endl << "--------------------------------------------------------------------------" << endl;
		macheZug();
		cout << endl;
	}
}



Spiel::~Spiel()
{
}
