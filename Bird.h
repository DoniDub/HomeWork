#pragma once
#include <iostream>
#include "Tetrapoda.h"
class Bird:public virtual Tetrapoda
{
	bool CanFly = true;
public:
	void setCanFly(bool CanFly);
	bool getCanFly()const;
	void info()const;
	Bird(string EyesColor = "Black", string name = "None", bool HasSkull = 1, bool HasTail = true, bool CanFly = true);
};

