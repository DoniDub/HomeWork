#pragma once
#include "GroundVehicle.h"
class Tank :
	public GroundVehicle
{
private:
	int damage;

public:
	int getDamage()const;
	void setDamage(int damage);
	Tank(string model, int max_speed, int number_of_seats, int engine_power);
	void info()const;
};

