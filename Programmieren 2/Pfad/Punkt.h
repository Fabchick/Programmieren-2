#pragma once

class Punkt
{
private:
	int _x;	 // X−Koordinate
	int _y;	 // Y−Koordinate

public:
	Punkt(int x, int y);
	void print();
	Punkt();
	~Punkt();
};