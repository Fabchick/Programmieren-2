#pragma once
class Spielfeld
{
private:
	int *Ereignisfeld;

public:
	Spielfeld(int felder);
	int getFeld(int position);
	Spielfeld();
	~Spielfeld();
};

