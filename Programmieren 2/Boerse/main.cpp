#include <iostream>

using namespace std;

#include"Boerse.h"
#include"Aktie.h"

int main()
{
	Boerse B;

	Aktie a("hallo");
	Aktie b("welt");


	B.add_aktie(a);
	B.add_aktie(b);

	B.cout_all_aktien();


}