#include "Plane.h"

Plane::Plane(string color, string model, int max_speed, int number_of_seats, int altitude, string arrivalGate):
	AirVehicle(color, model, max_speed, number_of_seats, altitude)
{
	this->arrivalGate = arrivalGate;
}

void Plane::setArrivalGate(string arrivalGate)
{
	this->arrivalGate = arrivalGate;
}

string Plane::getArrivalGate() const
{
	return this->arrivalGate;
}

void Plane::info() const
{
	cout << "Arrival gate: " << arrivalGate << endl;
}
