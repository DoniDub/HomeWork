#include "Fish.h"



Fish::Fish(string eyesColor, string name, bool hasSkull, bool hasGills, bool hasScale) :
	Chordata(eyesColor, name, hasSkull)
{
	this->setHasGills(hasGills);
	this->setHasScale(hasScale);
}

void Fish::setHasGills(bool hasGills)
{
	this->hasGills = hasGills;
}

void Fish::setHasScale(bool hasScale)
{
	this->hasScale = hasScale;
}

bool Fish::getHasGills() const
{
	return this->hasGills;
}

bool Fish::getHasScale() const
{
	return this->hasScale;
}

void Fish::info() const
{
	Chordata::info();
	cout << "Has gills: " << hasGills << endl;
	cout << "Has scale: " << hasScale << endl;
}