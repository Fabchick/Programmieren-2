#include "Aufzug.h"

#include <iostream>

using namespace std;

void Aufzug::oberstesStockwerk(int stockwerk)		//teilt dem Aufzug die Nummer des obersten Stockwerks des Gebäudes mit.
{
	Aufzug::maxStockwerk = stockwerk;
}

void Aufzug::reset()		//bewegt den Aufzug in das unterste Stockwerk.
{
	aktStockwerk = 0;
}

void Aufzug::auf()			//bewegt den Aufzug um ein Stockwerk nach oben
{
	if (maxStockwerk != aktStockwerk)
		aktStockwerk++;
	else
		cout << endl << "Du drueckst den Knopf, aber nichts passiert" << endl;
}

void Aufzug::ab()			//bewegt den Aufzug um ein Stockwerk nach unten
{
	if (aktStockwerk != 0)
		aktStockwerk--;
	else
		cout << endl << "Du drueckst den Knopf, aber nichts passiert" << endl;
}

int Aufzug::stockwerk()		//liefert die Nummer des Stockwerks, in dem sich der Aufzug gerade befindet.
{
	return(aktStockwerk);
}



Aufzug::Aufzug()
{
}
Aufzug::~Aufzug()
{
}
