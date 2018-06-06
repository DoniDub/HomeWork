#include "Lizard.h"



void Lizard::setBodyLength(int BodyLength)
{
	this->BodyLength = BodyLength;
}

int Lizard::getBodyLength() const
{
	return this->BodyLength;
}

void Lizard::info() const
{
	cout << "Body length: " << BodyLength << endl;
}

Lizard::Lizard(string EyesColor, string name, bool HasSkull, bool HasTail, int BodyLength):
	Tetrapoda(EyesColor, name, HasSkull, HasTail)
{
	this->BodyLength = BodyLength;
}


