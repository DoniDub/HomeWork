#pragma once
#include "Mammal.h"
class Human :
	public Mammal
{
private:
	std::string hairColor;
public:
	Human(string eyesColor = "Black", string name = "Unknown", bool hasSkull = true, bool hasTail = false, int numberOfMammaryGlands = 2, string hairColor = "Black");

	void setHairColor(string hairColor);
	string getHairColor() const;

	void info() const;
};