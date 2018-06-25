#include "Vehicle.h"



void Vehicle::setColor(string color)
{
	this->color = color;
}

void Vehicle::setModel(string model)
{
	this->model = model;
}

void Vehicle::setMaxSpeed(int max_speed)
{
	this->max_speed = max_speed;
}

void Vehicle::setNumberOfSeats(int number_of_seats)
{
	this->number_of_seats = number_of_seats;
}

string Vehicle::getColor() const
{
	return color;
}

string Vehicle::getModel() const
{
	return model;
}

int Vehicle::getMaxSpeed() const
{
	return max_speed;
}

int Vehicle::getNumberOfSeats() const
{
	return number_of_seats;
}

void Vehicle::info() const
{
	cout << "Color: " << color << endl;
	cout << "Model: " << model << endl;
	cout << "Max Speed: " << max_speed << endl;
	cout << "Number of seats: " << number_of_seats << endl;
}

Vehicle::Vehicle(string color, string model, int max_speed, int number_of_seats)
{
	setColor(color);
	setModel(model);
	setMaxSpeed(max_speed);
	setNumberOfSeats(number_of_seats);
}

