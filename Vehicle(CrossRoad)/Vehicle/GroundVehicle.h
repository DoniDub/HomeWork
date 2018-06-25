#pragma once
#include "Vehicle.h"
using namespace std;
class GroundVehicle :
	public Vehicle
{
private:
	int engine_power;

public:
	GroundVehicle(string color, string model, int max_speed, int number_of_seats, int engine_power);
	void setEnginePower(int engine_power);
	int getEnginePower()const;
	void info() const;
	void start();

};

