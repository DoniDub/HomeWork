#include "Mammal.h"


void Mammal::setNumberOfMammaryGlands(int numberOfMammaryGlands)
{
	this->numberOfMammaryGlands = numberOfMammaryGlands;
}

Mammal::Mammal(string eyesColor, string name, bool hasSkull, bool hasTail, int numberOfMammaryGlands):
	Tetrapoda(eyesColor, name, hasSkull, hasTail)
{
	this->setNumberOfMammaryGlands(numberOfMammaryGlands);
}


int Mammal::getNumberOfMammaryGladns() const
{
	return this->numberOfMammaryGlands;
}

void Mammal::info() const
{
	Tetrapoda::info();
	cout << "Number of mammary glands: " << numberOfMammaryGlands << endl;
}
