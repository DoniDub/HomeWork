#pragma once
#include "GroundVehicle.h"
class Bus :
	public GroundVehicle
{
private:
	int A;
public:
	Bus(string color, string model, int max_speed, int number_of_seats, int engine_power, int A);
	void setA(int A);
	int getA()const;
	void info() const;
	~Bus();
};

