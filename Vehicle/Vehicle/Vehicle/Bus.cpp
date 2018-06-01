#include "Bus.h"



Bus::Bus(string color, string model, int max_speed, int number_of_seats, int engine_power, int A):
	GroundVehicle (color, model, max_speed, number_of_seats, engine_power)
{
	this->A = A;
}

void Bus::setA(int A)
{
	this->A = A;
}

int Bus::getA() const
{
	return this->A;
}

void Bus::info() const
{
	cout << "A: " << A << endl;
}
