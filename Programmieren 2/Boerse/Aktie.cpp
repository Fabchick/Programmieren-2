#include "Aktie.h"

#include <iostream>
#include <iomanip>

using namespace std;

Aktie::Aktie(string name)
{
	aktienName = name;

	for (int i = 4; i < 11; i++)
	{
		switch (rand() % 10)
		{
		case 0:temp = '0'; break;
		case 1:temp = '1'; break;
		case 2:temp = '2'; break;
		case 3:temp = '3'; break;
		case 4:temp = '4'; break;
		case 5:temp = '5'; break;
		case 6:temp = '6'; break;
		case 7:temp = '7'; break;
		case 8:temp = '8'; break;
		case 9:temp = '9'; break;
		}

		ISIN.insert(i, temp);
	}
}

void Aktie::Cout_aktie()
{
	cout << "Name: " << setw(12) << aktienName;

	cout << "      ISIN: " << ISIN;

	cout << "      Kurs: " << KursP->Get_kurs() << endl;
}

void Aktie::Get_next_kurs()
{
	getBool = KursP->Simulate_kurs();
}

bool Aktie::Get_bool()
{
	return(getBool);
}

int Aktie::Get_kurs()
{
	return(KursP->Get_kurs());
}

string Aktie::Get_name()
{
	return(aktienName);
}

Aktie::~Aktie()
{
}
