#pragma once

#include<string>
#include<time.h>
#include<Windows.h>

#include"Kurs.h"

using namespace std;

class Aktie
{
private:
	string name;
	char ISIN[15];
	Kurs K;
public:
	Aktie();
	Aktie(string name);
	void cout_aktie();
	int get_next_kurs();
	int get_kurs();
	~Aktie();
};

