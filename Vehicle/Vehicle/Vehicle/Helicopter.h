#pragma once
#include "AirVehicle.h"
class Helicopter :
	public AirVehicle
{
private:
	int number_of_blades = 4;
public:
	Helicopter(string color, string model, int max_speed, int number_of_seats, int altitude, int number_of_blades);
	void setNumberOfBaldes(int number_of_blades);
	int getNumberOfBaldes()const;
	void info()const;
};

