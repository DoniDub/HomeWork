#include "Helicopter.h"

Helicopter::Helicopter(string color, string model, int max_speed, int number_of_seats, int altitude, int number_of_blades):
	AirVehicle(color, model, max_speed, number_of_seats, altitude)
{
	this->number_of_blades = number_of_blades;
}

void Helicopter::setNumberOfBaldes(int number_of_blades)
{
	this->number_of_blades = number_of_blades;
}

int Helicopter::getNumberOfBaldes()const
{
	return this->number_of_blades;
}

void Helicopter::info() const
{
	cout << "Number of blades: " << number_of_blades << endl;
}
