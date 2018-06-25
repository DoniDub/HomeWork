#include "WaterVehicle.h"



WaterVehicle::WaterVehicle(string color, string model, int max_speed, int number_of_seats, string seaworthiness):
	Vehicle(color, model, max_speed, number_of_seats)
{
	this->setSeaWorthiness(seaworthiness);
}

void WaterVehicle::setSeaWorthiness(string seaworthiness)
{
	this->seaworthiness = seaworthiness;
}

string WaterVehicle::getSeaWorthiness() const
{
	return this->seaworthiness;
}

void WaterVehicle::info() const
{
	cout << "Sea worthiness: " << seaworthiness << endl;
}


