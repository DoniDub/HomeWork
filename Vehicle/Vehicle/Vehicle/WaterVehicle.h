#pragma once
#include "Vehicle.h"
class WaterVehicle :
	public Vehicle
{
private:
	string seaworthiness;
public:
	WaterVehicle(string color, string model, int max_speed, int number_of_seats, string seaworthiness);
	void setSeaWorthiness(string seaworthiness);
	string getSeaWorthiness()const;
	void info()const;
};

