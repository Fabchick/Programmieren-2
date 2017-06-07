#include "Kurs.h"

Kurs::Kurs()
{
	srand(time(NULL));
	kurs = (rand()%9000)+1001;

}

void Kurs::simulate_kurs()
{

	999
}


int Kurs::get_kurs()
{
	return(kurs);
}


Kurs::~Kurs()
{
}
