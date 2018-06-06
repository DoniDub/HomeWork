#pragma once
#include "Tetrapoda.h"
using namespace std;
class Mammal :
	public Tetrapoda
{
private:
	int numberOfMammaryGlands;
public:
	Mammal(string eyesColor = "Black", string name = "Unknown", bool hasSkull = true, bool hasTail = true, int numberOfMammaryGlands = 2);
	void setNumberOfMammaryGlands(int numberOfMammaryGlands);
	int getNumberOfMammaryGladns()const;
	void info()const;
};

