#include "Pfad.h"

#include <iostream>

using namespace std;


void Pfad::insertKoord(Punkt &p)
{
	punkte[i] = p;
	i++;
}


void Pfad::printKoord(int anzPunkte)
{
	cout << endl;
	for (int i = 0; i < anzPunkte; i++)
	{
		punkte[i].print();
	}
}


Pfad::Pfad(int anzPunkte)
{
	this->anzPunkte = anzPunkte;
	cout << endl << endl << "Der Pfad besitzt " << anzPunkte << " Punkte:" << endl << endl;
}

Pfad::Pfad()
{
}

Pfad::~Pfad()
{
}