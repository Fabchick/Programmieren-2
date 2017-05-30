#include "Mult.h"

#include <iostream>

using namespace std;

Mult::Mult(Verschachtelungsebene* temp1, Verschachtelungsebene* temp2)
{
	zahl1 = temp1;
	zahl2 = temp2;
	erg = zahl1->wert() * zahl2->wert();
}

int Mult::wert()
{
	return(erg);
}

void Mult::print()
{
	cout << "(";
	zahl1->print();
	cout << "*";
	zahl2->print();
	cout << ")";
}

Mult::~Mult()
{
}
