#pragma once


class Spielfigur
{
protected:

public:
	virtual bool ziehe(int felder) = 0;
	virtual int getVorrat() = 0;
	virtual int getPosition() = 0;
	Spielfigur();
	~Spielfigur();
};

