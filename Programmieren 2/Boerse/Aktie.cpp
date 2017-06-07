#include "Aktie.h"

#include <iostream>

using namespace std;

Aktie::Aktie(string name)
{
	srand(time(NULL));

	this->name = name;

	ISIN[0] = '#';
	ISIN[1] = '0';
	ISIN[2] = 'A';
	ISIN[3] = '.';
	
	for (int i = 4; i < 11; i++)
	{
		switch (rand() % 10)
		{
		case 0:ISIN[i] = '0'; break;
		case 1:ISIN[i] = '1'; break;
		case 2:ISIN[i] = '2'; break;
		case 3:ISIN[i] = '3'; break;
		case 4:ISIN[i] = '4'; break;
		case 5:ISIN[i] = '5'; break;
		case 6:ISIN[i] = '6'; break;
		case 7:ISIN[i] = '7'; break;
		case 8:ISIN[i] = '8'; break;
		case 9:ISIN[i] = '9'; break;
		}
	}
}

void Aktie::cout_aktie()
{
	cout << name << " ISIN: ";
	for (int i = 0; i < 11; i++)
	{
		cout << ISIN[i];
	}
	cout << " Kurs: " << K.get_kurs() << endl;
}

int Aktie::get_next_kurs()
{
	K.simulate_kurs();
	return(K.get_kurs());
}

int Aktie::get_kurs()
{
	return(K.get_kurs());
}

Aktie::~Aktie()
{
}
