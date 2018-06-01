#include "Boat.h"



Boat::Boat(string color, string model, int max_speed, int number_of_seats, string seaworthiness, string boattype):
	WaterVehicle(color, model, max_speed, number_of_seats, seaworthiness)
{
	this->BoatType = BoatType;
}

void Boat::setBoatType(string BoatType)
{
	this->BoatType = BoatType;
}

string Boat::getBoatType() const
{
	return this->BoatType;
}

void Boat::info() const
{
	cout << "Boat type: " << BoatType << endl;
}

