#include "Spielfeld.h"

#include <iostream>
#include <time.h>

using namespace std;

Spielfeld::Spielfeld(int felder)
{
	
	Ereignisfeld = new int[felder];						// Array mit anzahl felder

	for (int i = 0; i < felder; i++)
	{
		if ((rand() % 3) == 0)							//jedes x. Feld
			Ereignisfeld[i] = (rand() % 4)+1;			//1,2,3 sind random Ereignisse
	}
}

int Spielfeld::getFeld(int position)
{
	return(Ereignisfeld[position]);						//gibt den Wert des Feldes zurück
}


Spielfeld::Spielfeld()
{
}
Spielfeld::~Spielfeld()
{
}
