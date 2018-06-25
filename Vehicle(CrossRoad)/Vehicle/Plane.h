
#include "AirVehicle.h"
using namespace std;
class Plane :
	public AirVehicle
{
private:
	string arrivalGate;
public:
	Plane(string color, string model, int max_speed, int number_of_seats, int altitude, string arrivalGate);
	void setArrivalGate(string arrivalGate);
	string getArrivalGate()const;
	void info()const;
};
