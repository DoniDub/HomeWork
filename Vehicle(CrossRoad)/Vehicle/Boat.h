#pragma once
#include "WaterVehicle.h"
class Boat :
	public WaterVehicle
{
private:
	string BoatType;
public:
	Boat(string color, string model, int max_speed, int number_of_seats, string seaworthiness, string boattype);
	void setBoatType(string BoatType);
	string getBoatType()const;
	void info()const;
};

