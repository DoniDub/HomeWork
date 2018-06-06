#pragma once
#include <iostream>
#include <string>
#include "Chordata.h"
class Tetrapoda:public Chordata
{
	bool HasTail = true;
public:

	Tetrapoda(string EyesColor = "Black", string name = "None", bool HasSkull = 1, bool HasTail = true);
	void setHasTail(bool HasTail);
	bool getHasTail()const;
	void info()const;
};

