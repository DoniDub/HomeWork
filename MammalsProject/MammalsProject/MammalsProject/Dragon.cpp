#include "Dragon.h"



void Dragon::setFireDistance(int FireDistance)
{
	this->FireDistance = FireDistance;
}

int Dragon::getFireDistance() const
{
	return this->FireDistance;
}

void Dragon::info() const
{
	Tetrapoda::info();
	cout << "Fire distance: " << FireDistance << endl;
	cout << "Can fly: " << getCanFly() << endl;
	cout << "Body length: " << getBodyLength() << endl;
}

Dragon::Dragon(string EyesColor, string name, bool HasSkull, bool HasTail, int BodyLength, bool CanFly, int FireDistance):
	Bird(EyesColor, name, HasSkull, HasTail, CanFly), Lizard(EyesColor, name, HasSkull, HasTail, BodyLength)
{
	setName(name);
	setEyescolor(EyesColor);
	setHasTail(HasTail);
	this->FireDistance = FireDistance;
}

