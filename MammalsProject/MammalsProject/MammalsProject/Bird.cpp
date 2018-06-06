#include "Bird.h"



void Bird::setCanFly(bool CanFly)
{
	this->CanFly = CanFly;
}

bool Bird::getCanFly() const
{
	return this->CanFly;
}

void Bird::info() const
{
	cout << "Can fly: " << CanFly << endl;
}

Bird::Bird(string EyesColor, string name, bool HasSkull, bool HasTail, bool CanFly):
	Tetrapoda(EyesColor, name, HasSkull, HasTail)
{
	this->setCanFly(CanFly);
}

