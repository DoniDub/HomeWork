#include "Bike.h"



Bike::Bike(string color, string model, int max_speed, int number_of_seats, int engine_power, int turn):
	GroundVehicle(color, model, max_speed, number_of_seats, engine_power)
{
	this->turn = turn;
}

void Bike::setTurn(int turn)
{
	this->turn = turn;
}

int Bike::getTurn() const
{
	return this->turn;
}

void Bike::info() const
{
	cout << "Turn: " << turn << endl;
}

