#include <iostream>

#include "Zahl.h"
#include "Add.h"
#include "Mult.h"
using namespace std;

void main()
{
	{ //Term 1
		Zahl z1(7);
		Zahl z2(5);
		Add a1(&z1, &z2);
		Zahl z3(2);
		Mult m1(&a1, &z3);
		Zahl z4(8);
		Add  a2(&m1, &z4);

		a2.print();
		cout << " = ";
		cout << a2.wert();
		cout << endl << endl;
	}


	{ //Term 2
		Zahl z1(5);
		Zahl z2(17);
		Mult m1(&z1, &z2);
		Zahl z3(2);
		Add a1(&m1, &z3);

		a1.print();
		cout << " = ";
		cout << a1.wert();
		cout << endl << endl;
	}

	system("PAUSE");
}