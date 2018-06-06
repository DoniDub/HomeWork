#pragma once
#include <iostream>
using namespace std;
class Eye
{
	string color;
public:
	void setColor(string color);
	string getColor()const;
	Eye(string col = "Black");

};

