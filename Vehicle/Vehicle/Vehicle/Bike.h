#pragma once
#include "GroundVehicle.h"
class Bike :
	public GroundVehicle
{
private:
	int turn;
public:
	Bike(string color, string model, int max_speed, int number_of_seats, int engine_power, int turn);
	void setTurn(int turn);
	int getTurn()const;
	void info()const;
};

