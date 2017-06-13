#include "Ticker.h"

#include<iostream>

using namespace std;

Ticker::Ticker(Boerse* boerse)
{
	boerseP = boerse;
	boerseP->Anmelden(this);
}


void Ticker::Aktualisiere(Beobachterziel* BeobachterzielP)
{
	if (BeobachterzielP == boerseP)		//falls das beobachtete Ziel die Börse ist, dann...
	{
		cout << endl << "Ticker: Es werden alle aktuell geaenderten Aktien aufgerufen:" << endl;

		for (int i = 0; i < boerseP->Get_anzahl_aktien(); i++)
		{
			if (boerseP->Get_aktie(i)->Get_bool() == true)
			boerseP->Get_aktie(i)->Cout_aktie();
		}
	}
}


Ticker::~Ticker()
{
	boerseP->Abmelden(this);
}
