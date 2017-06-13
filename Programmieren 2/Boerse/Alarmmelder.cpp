#include "Alarmmelder.h"

#include <iostream>
#include <iomanip>

using namespace std;

Alarmmelder::Alarmmelder(Boerse* boerse)
{
	boerseP = boerse;
	boerseP->Anmelden(this);

	for (int i = 0; i < boerseP->Get_anzahl_aktien(); i++)
	{
		anfangsKursArray[i] = boerseP->Get_aktie(i)->Get_kurs();
	}
}

void Alarmmelder::Aktualisiere(Beobachterziel* BeobachterzielP)
{
	if (BeobachterzielP == boerseP)		//falls das beobachtete Ziel die Börse ist, dann...
	{
		cout << endl << "Alarm: es werden hier alle Aktien mit starkem Auf- oder Abstieg angezeigt:" << endl;

		for (int i = 0; i < boerseP->Get_anzahl_aktien(); i++)
		{
			if (boerseP->Get_aktie(i)->Get_bool() == true)
			{
				if ((boerseP->Get_aktie(i)->Get_kurs()) < (anfangsKursArray[i] - 1000))
				{
					cout << "Aktie " << setw(12) << boerseP->Get_aktie(i)->Get_name();
					cout << " erreicht einen kritischen Stand." << endl;
				}

				if ((boerseP->Get_aktie(i)->Get_kurs()) > (anfangsKursArray[i] + 1000))
				{
					cout << "Aktie " << setw(12) << boerseP->Get_aktie(i)->Get_name();
					cout << " erreicht einen Aufschwung." << endl;
				}
			}
		}
	}
}

Alarmmelder::~Alarmmelder()
{
	boerseP->Abmelden(this);
}
