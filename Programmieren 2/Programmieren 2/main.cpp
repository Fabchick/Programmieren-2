#include <iostream>
#include <conio.h>

#include "Aufzug.h"

using namespace std;


void main()
{
	Aufzug A;

	int obersterStock = 0;
	char button = 'a';

	cout << "Der Aufzug zeigt als den hoechsten Stock folgenden an:" << endl;
	cin >> obersterStock;

	A.oberstesStockwerk(obersterStock);

	while (button != 'x')
	{
		cout << endl << "Der Aufzug bietet 3 Knoepfe zu betaetigen mit der Information: [auf = w, ab = s, aussteigen = x]" << endl;
		button = _getche();

		switch (button) {

		case 'w': A.auf(); break;
		case 's': A.ab(); break;
		case 'x': A.reset();
		}
		if (button == 'x')
			cout << endl << "Nach dem Betaetigen des Knopfes mit der Aufschrift -x- hoerst du wie ein dicker Draht aus Metall lospeitscht." << endl << "Der Aufzug rattert in das Erdgeschoss. " << "Es oeffnet sich die Tuer im Aufzug." << endl << "Es spruehen Funken aus allen Ecken." << endl << "Der Aufzug scheint nichtmehr zu funktionieren";
		else
			cout << endl << "Auf der Anzeige im Aufzug steht: aktuelles Stockwerk: " << A.stockwerk() << endl;

	}


	cin >> button;

}