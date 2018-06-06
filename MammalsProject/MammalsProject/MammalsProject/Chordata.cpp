#include "Chordata.h"
#include <iostream>


void Chordata::setName(string name)
{
	this->name = name;
}

string Chordata::getName() const
{
	return this->name;
}

string Chordata::getEyescolor() const
{
	return this->eyes[0].getColor();
}

void Chordata::setEyescolor(string EyesColor)
{
	eyes[0].setColor(EyesColor);
	eyes[1].setColor(EyesColor);
}

bool Chordata::getSkull() const
{
	return HasSkull;
}

Chordata::Chordata(string Eyescolor, string name, bool HasSkull)
{
	setEyescolor(Eyescolor);
	setName(name);
	this->HasSkull = HasSkull;
}

void Chordata::move() const
{
	cout << "Chorddata is moving" << endl;
}

void Chordata::info() const
{
	cout << "Name: " << name << endl;
	cout << "Eyes color: " << getEyescolor() << endl;
	cout << "HasSkull: " << HasSkull << endl;
}
