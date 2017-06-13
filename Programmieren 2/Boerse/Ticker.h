#pragma once

#include"Beobachter.h"
#include"Beobachterziel.h"
#include"Boerse.h"

class Ticker : public Beobachter
{
private:
	Boerse *boerseP;

public:
	Ticker(Boerse* boerse);
	void Aktualisiere(Beobachterziel* BeobachterzielP);
	~Ticker();
};

