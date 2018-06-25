#include "GroundVehicle.h"



GroundVehicle::GroundVehicle(string color, string model, int max_speed, int number_of_seats, int engine_power):
	Vehicle(color, model, max_speed, number_of_seats)
{
	this->engine_power = engine_power;
}

void GroundVehicle::setEnginePower(int engine_power)
{
	this->engine_power = engine_power;
}

int GroundVehicle::getEnginePower() const
{
	return engine_power;
}

void GroundVehicle::info() const
{
	Vehicle::info();
	cout << "Engine Power: " << engine_power << endl;
}

void GroundVehicle::start()
{
}
