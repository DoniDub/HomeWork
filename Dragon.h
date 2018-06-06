#pragma once
#include <iostream>
#include "Bird.h"
#include "Lizard.h"
class Dragon:public Bird, public Lizard 
{
	int FireDistance = 1;
public:
	void setFireDistance(int FireDistance);
	int getFireDistance()const;
	void info()const;
	Dragon(string EyesColor = "Black", string name = "None", bool HasSkull = 1, bool HasTail = 1, int BodyLength = 10, bool CanFly = true, int FireDistance = 1);
};

