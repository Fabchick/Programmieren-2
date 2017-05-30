#pragma once
class Verschachtelungsebene
{
private:
	int ebene = 0;
public:
	Verschachtelungsebene();
	virtual int wert() = 0;
	virtual void print() = 0;
	~Verschachtelungsebene();
};