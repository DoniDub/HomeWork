#include "Eye.h"



void Eye::setColor(string color)
{
	this->color = color;
}

string Eye::getColor()const
{
	return this->color;
}

Eye::Eye(string col)
{
	this->color = col;
}





