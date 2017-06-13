#include "Kurs.h"

Kurs::Kurs()
{
	kurs = (rand()%9000)+1001;	//kurs geht am anfang von 1001-10000
}

bool Kurs::Simulate_kurs()
{
	if (rand() % 5 != 0)		//jedes 5. mal ca. keine Änderung
	{
		kurs += rand() % 1000;	//maximal +1000 und minimal -1000
		kurs -= rand() % 1000;
		return(true);
	}
	return(false);
}


int Kurs::Get_kurs()
{
	return(kurs);
}


Kurs::~Kurs()
{
}
