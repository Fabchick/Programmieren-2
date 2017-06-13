#include "Beobachterziel.h"



Beobachterziel::Beobachterziel()
{
}

void Beobachterziel::Anmelden(Beobachter* beobachter)
{
	beobachterP[anzBeobachter] = beobachter;
	anzBeobachter++;
}

void Beobachterziel::Abmelden(Beobachter* beobachter)
{
	for (int i = 0; i < anzBeobachter; i++)
	{
		if (beobachterP[i] == beobachter)
		{
			beobachterP[i] = 0;
		}
	}
}

void Beobachterziel::Benachrichtige_alle()
{
	for (int i = 0; i < anzBeobachter; i++)
	{
		if (beobachterP[i] != 0)
		{
			beobachterP[i]->Aktualisiere(this);
		}
	}
}


Beobachterziel::~Beobachterziel()
{
}
