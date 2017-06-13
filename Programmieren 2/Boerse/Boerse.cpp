#include "Boerse.h"

#include <iostream>

using namespace std;


Boerse::Boerse()
{
}

void Boerse::Add_aktie(Aktie &aktie)
{
	if (anzAktien < MAX_AKTIEN)
	{
		aktienP[anzAktien] = &aktie;
		aktienP[anzAktien]->Cout_aktie();
		anzAktien++;
	}
	
	Benachrichtige_alle();
}

int Boerse::Get_anzahl_aktien()
{
	return(anzAktien);
}

Aktie *Boerse::Get_aktie(int i)
{
	return(aktienP[i]);
}

void Boerse::Simulate()
{
	for (int i = 0; i < anzAktien; i++)
	{
		aktienP[i]->Get_next_kurs();
	}
	cout << endl;
	Benachrichtige_alle();
}

/*void Boerse::Anmelden(Beobachter* beobachter)
{
}

void Boerse::Abmelden(Beobachter* beobachter)
{
}

void Boerse::Benachrichtige_alle()
{
}*/

Boerse::~Boerse()
{
}
