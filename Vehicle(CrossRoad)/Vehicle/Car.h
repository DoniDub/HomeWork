#pragma once
#include "GroundVehicle.h"
class Car :
	public GroundVehicle
{
private:
	int number_of_wheels;
public:
	Car(string color, string model, int max_speed, int number_of_seats, int engine_power);
	void setNumberOfWheels(int number_of_wheels);
	int getNumberOfWheels() const;
	void info()const;
};

