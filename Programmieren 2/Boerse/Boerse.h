#pragma once

#include"Aktie.h"

#define MAX_AKTIEN 20

class Boerse
{
private:
	Aktie a[MAX_AKTIEN];
	int anzAktien = 0;
public:
	void add_aktie(Aktie a);
	void cout_all_aktien();
	Boerse();
	~Boerse();
};

