#include "Kurs.h"

Kurs::Kurs()
{
	srand(time(NULL));
	kurs = (rand()%9000)+1001;	//kurd geht am anfang von 1001-10000
}

void Kurs::simulate_kurs()
{
	kurs += rand() % 1000;	//maximal +1000 und minimal -1000
	kurs -= rand() % 1000;
}


int Kurs::get_kurs()
{
	return(kurs);
}


Kurs::~Kurs()
{
}
