#pragma once
class Verschachtelungsebene
{
public:
	Verschachtelungsebene();
	virtual int wert() = 0;
	virtual void print() = 0;
	~Verschachtelungsebene();
};