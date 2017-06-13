#include <iostream>
#include <ctime>
#include <random>
#include <Windows.h>
using namespace std;

#include"Boerse.h"
#include"Aktie.h"
#include"Alarmmelder.h"
#include"Ticker.h"

int main()
{
	srand(time(0));

	cout << "Boersensimulator wird gestartet....." << endl << endl;

	Boerse boerse;

	boerse.Add_aktie(*new Aktie("Samsung"));
	boerse.Add_aktie(*new Aktie("Apple"));
	boerse.Add_aktie(*new Aktie("BMW"));
	boerse.Add_aktie(*new Aktie("Audi"));
	boerse.Add_aktie(*new Aktie("DeutscheBahn"));


	Ticker ticker(&boerse);
	Alarmmelder alarmmelder(&boerse);


	int i = 0;
	while (i < 10)
	{
		boerse.Simulate();
		i++;
		Sleep(1000);
	}

	system("PAUSE");
}