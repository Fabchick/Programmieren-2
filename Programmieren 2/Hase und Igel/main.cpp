#include <iostream>
#include <time.h>
#include <windows.h>

#include "Spiel.h"

using namespace std;

void main()
{
	srand(time(NULL));
	int anzFelder = 0;

	cout << "Hier ein Rennen zwischen Hasen und Igel." << endl;
	cout << "Wieviele Felder soll Spiel besitzen?  ";
	cin >> anzFelder;

	Spiel erstelleSpiel(anzFelder);

	cin >> anzFelder;
}