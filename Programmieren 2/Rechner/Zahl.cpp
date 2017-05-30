#include "Zahl.h"

#include <iostream>

using namespace std;


Zahl::Zahl(int temp)
{
	zWert = temp;
}

int Zahl::wert()
{
	return(zWert);
}

void Zahl::print()
{
	cout << zWert;
}

Zahl::~Zahl()
{
}
