#include "Punkt.h"

#include <iostream>

using namespace std;

Punkt::Punkt(int x, int y)
{
	_x = x; _y = y;
}

void Punkt::print()
{
	cout << "(" << _x << "," << _y << ") ";
}


Punkt::Punkt()
{
}
Punkt::~Punkt()
{
}