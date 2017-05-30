#include <iostream>
#include <conio.h>
using namespace std;

#include "Punkt.h"
#include "Pfad.h"

int main()
{
	char nochEins = 't';
	int i = 0;
	int x = 0;
	int y = 0;
	Punkt *p[100];

	cout << "Geben Sie hier Ihre Punkte an: ";

	do {


		cout << endl << "Punkt #" << i << endl << "X:";
		cin >> x;
		cout << "Y:";
		cin >> y;

		p[i] = new Punkt(x, y);
		i++;

		cout << "moechten sie noch einen punkt zum pfad hinzufuegen? (t|f)  ";
		nochEins = _getche();

	} while (nochEins != 'f');

	Pfad derPfad(i);

	for (int j = 0; j < i; j++)
	{
		derPfad.insertKoord(*p[j]);
	}

	derPfad.printKoord(i);

	_getch();
}