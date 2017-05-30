#include "Add.h"

#include <iostream>

using namespace std;

Add::Add(Verschachtelungsebene* temp1, Verschachtelungsebene* temp2)
{
	zahl1 = temp1;
	zahl2 = temp2;
	erg = zahl1->wert() * zahl2->wert();
}

int Add::wert()
{
	return(erg);
}

void Add::print()
{
	cout << "(";
	zahl1->print();
	cout << "+";
	zahl2->print();
	cout << ")";
}

Add::~Add()
{
}