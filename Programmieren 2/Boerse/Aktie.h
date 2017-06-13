#pragma once

#include <string>
#include <ctime>
#include <random>

#include"Kurs.h"

using namespace std;

class Aktie
{
private:
	string temp;
	string aktienName;
	string ISIN = "#0A.";
	Kurs *KursP = new Kurs;
	bool getBool = 0;
public:
	Aktie(string name);
	void Cout_aktie();
	void Get_next_kurs();
	bool Get_bool();
	int Get_kurs();
	string Get_name();
	~Aktie();
};

