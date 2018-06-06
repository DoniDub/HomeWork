#pragma once
#include <iostream>
#include "Tetrapoda.h"
class Lizard:public virtual Tetrapoda
{
	int BodyLength = 10;
public:
	void setBodyLength(int BodyLength);
	int getBodyLength()const;
	void info()const;
	Lizard(string EyesColor = "Black", string name = "None", bool HasSkull = 1, bool HasTail = 1, int BodyLength = 10);
};

