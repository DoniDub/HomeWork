#include "Human.h"



Human::Human(string eyesColor, string name, bool hasSkull, bool hasTail, int numberOfMammaryGlands, string hairColor) :
	Mammal(eyesColor, name, hasSkull, hasTail, numberOfMammaryGlands)
{
	this->setHairColor(hairColor);
}

void Human::setHairColor(string hairColor)
{
	this->hairColor = hairColor;
}

std::string Human::getHairColor() const
{
	return this->hairColor;
}

void Human::info() const
{
	Mammal::info();
	cout << "Hair color: " << hairColor << endl;
}