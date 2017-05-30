#pragma once

class Aufzug
{

private:

	int aktStockwerk = 0;
	int maxStockwerk = 0;

public:

	void oberstesStockwerk(int stockwerk);
	void reset();
	void auf();
	void ab();
	int stockwerk();


	Aufzug();
	~Aufzug();
};