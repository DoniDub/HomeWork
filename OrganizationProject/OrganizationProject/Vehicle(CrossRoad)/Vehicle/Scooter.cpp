#include "Scooter.h"



Scooter::Scooter(string color, string model, int max_speed, int number_of_seats, string seaworthiness, string boattype, string maneuverability):
	WaterVehicle(color, model, max_speed, number_of_seats, seaworthiness)
{
	this->maneuverability = maneuverability;
}

void Scooter::setManeuverability(string maneuverability)
{
	this->maneuverability = maneuverability;
}

string Scooter::getManeuverability() const
{
	return this->maneuverability;
}

void Scooter::info() const
{
	cout << "Maneuverability: " << maneuverability << endl;
}

