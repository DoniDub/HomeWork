#pragma once
#include <string>
#include <iostream>
using namespace std;
class Vehicle
{
private:
	string color;
	string model;
	int max_speed;
	int number_of_seats;
public:
	Vehicle(string color, string model, int max_speed, int number_of_seats);
	//setters
	void setColor(string color);
	void setModel(string model);
	void setMaxSpeed(int max_speed);
	void setNumberOfSeats(int number_of_seats);
	//getters
	string getColor()const;
	string getModel()const;
	int getMaxSpeed()const;
	int getNumberOfSeats()const;
	
	void info() const;
	
};

