#pragma once

#include "Beobachter.h"

#define MAX_BEOBACHTER 10

class Beobachterziel {
private:
	Beobachter* beobachterP[MAX_BEOBACHTER];
	int anzBeobachter = 0;
public:
	Beobachterziel();
	void Anmelden(Beobachter* beobachter);
	void Abmelden(Beobachter* beobachter);
	void Benachrichtige_alle();
	~Beobachterziel();
};