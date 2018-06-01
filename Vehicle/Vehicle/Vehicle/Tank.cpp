#include "Tank.h"



int Tank::getDamage() const
{
	return damage;
}

void Tank::setDamage(int damage)
{
	this->damage = damage;
}

Tank::Tank(string model, int max_speed, int number_of_seats, int engine_power):
	GroundVehicle("Green", model, max_speed, number_of_seats, engine_power)
{
	this->damage = 100;
}

void Tank::info() const
{
	cout << "Model: " << getModel() << endl;
	cout << "Max Speed: " << getMaxSpeed() << endl;
	cout << "Engine Power: " << getEnginePower() << endl;
	cout << "Number of seats: " << getNumberOfSeats() << endl;
	cout << "Damage: " << damage << endl;
}
