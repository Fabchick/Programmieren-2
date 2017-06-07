#include "Boerse.h"

#include <iostream>

using namespace std;


Boerse::Boerse()
{
}

void Boerse::add_aktie(Aktie a)
{
	this->a[anzAktien] = a;
	anzAktien++;
}


void Boerse::cout_all_aktien()
{
	cout << "Alle aktuellen Aktien:" << endl;
	for (int i = 0; i < anzAktien; i++)
	{
		a[i].cout_aktie();
	}
}


Boerse::~Boerse()
{
}
