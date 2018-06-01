#pragma once
#include "WaterVehicle.h"
class Scooter :
	public WaterVehicle
{
private:
	string maneuverability;
public:
	Scooter(string color, string model, int max_speed, int number_of_seats, string seaworthiness, string boattype, string maneuverability);
	void setManeuverability(string maneuverability);
	string getManeuverability()const;
	void info()const;
};

