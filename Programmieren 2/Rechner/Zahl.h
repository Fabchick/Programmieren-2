#pragma once
#include "Verschachtelungsebene.h"
class Zahl : public Verschachtelungsebene
{
private:
	int zWert = 0;
public:
	Zahl(int temp);
	int wert();
	void print();
	~Zahl();
};

