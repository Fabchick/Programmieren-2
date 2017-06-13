#pragma once

class Beobachterziel;

class Beobachter
{
public:
	Beobachter();
	virtual void Aktualisiere(Beobachterziel* beobachterzielP) = 0;
	~Beobachter();
};

