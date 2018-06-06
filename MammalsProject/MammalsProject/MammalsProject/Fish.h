#pragma once
#include "Chordata.h"
#include <string>
using namespace std;
class Fish :
	public Chordata
{
private:
	bool hasGills;
	bool hasScale;
public:
	Fish(string eyesColor = "Black", string name = "Unknown", bool hasSkull = true, bool hasGills = true, bool hasScale = true);

	void setHasGills(bool hasGills);
	void setHasScale(bool hasScale);
	bool getHasGills() const;
	bool getHasScale() const;

	void info() const;
};
