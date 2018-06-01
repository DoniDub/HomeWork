#include "Car.h"



Car::Car(string color, string model, int max_speed, int number_of_seats, int engine_power):
	GroundVehicle(color, model, max_speed, number_of_seats, engine_power)
{
	this->number_of_wheels = number_of_seats;
}

void Car::setNumberOfWheels(int number_of_wheels)
{
	this->number_of_wheels = number_of_wheels;
}

int Car::getNumberOfWheels() const
{
	return number_of_wheels;
}

void Car::info() const
{
	GroundVehicle::info();
	cout << "Number of wheels: " << number_of_wheels << endl;
}
