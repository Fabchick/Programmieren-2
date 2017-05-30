#pragma once
#include "Verschachtelungsebene.h"
class Mult : public Verschachtelungsebene
{
private:
	Verschachtelungsebene* zahl1;
	Verschachtelungsebene* zahl2;
	int erg = 0;
public:
	Mult(Verschachtelungsebene *temp1, Verschachtelungsebene *temp2);
	int wert();
	void print();
	~Mult();
};

