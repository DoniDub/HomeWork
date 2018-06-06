#include "Tetrapoda.h"


Tetrapoda::Tetrapoda(string EyesColor, string name, bool HasSkull, bool HasTail):
	Chordata(EyesColor, name, HasSkull)
{
	this->HasTail = HasTail;

}


void Tetrapoda::setHasTail(bool HasTail)
{
	this->HasTail = HasTail;
}

bool Tetrapoda::getHasTail() const
{
	return this->HasTail;
}

void Tetrapoda::info() const
{
	Chordata::info();
	cout << "Has tail: " << HasTail << endl;
}


