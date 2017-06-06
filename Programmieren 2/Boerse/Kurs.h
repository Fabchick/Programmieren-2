#pragma once

#include<time.h>
#include<Windows.h>

class Kurs
{
private:
	int kurs = 0;
public:
	Kurs();
	void simulate_kurs();
	int get_kurs();
	~Kurs();
};

