#pragma once
#include <iostream>
#include <string>
#include "Eye.h"
using namespace std;
class Chordata
{
	Eye eyes[2];
	string name;
	bool HasSkull = true;
public:
	void setName(string name);
	string getName() const;
	string getEyescolor() const;
	void setEyescolor(string EyesColor);
	bool getSkull() const;
	Chordata(string Eyescolor = "Black", string name = "None", bool HasSkull = 1);
	void move()const;
	void info() const;
};

