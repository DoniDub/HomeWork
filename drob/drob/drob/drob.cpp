#include "drob.h"


drob::drob(int numerator, int denominator)
{
	if (denominator == 0)
		throw std::exception("division by zero");
	setNumerator(numerator);
	setDenominator(denominator);
}

void drob::setNumerator(int numerator)
{
	this->numerator = numerator;
}

void drob::setDenominator(int denominator)
{
	if (denominator == 0)
		this->denominator = 1;
	else
		this->denominator = denominator;
}

int drob::getNumerator() const
{
	return this->numerator;
}

int drob::getDenominator() const
{
	return this->denominator;
}

double drob::getDouble() const
{
	return double(this->numerator) / this->denominator;
}

const drob& drob::operator+=(const drob &a)
{
	this->numerator = this->numerator*a.denominator + this->denominator*a.numerator;
	this->denominator = this->denominator*a.denominator;
	return *this;
}

const drob& drob::operator-=(const drob &a)
{
	this->numerator = this->numerator*a.denominator - this->denominator*a.numerator;
	this->denominator = this->denominator*a.denominator;
	return *this;
}

const drob& drob::operator*=(const drob &a)
{
	this->numerator = this->numerator*a.numerator;
	this->denominator = this->denominator*a.denominator;
	return *this;
}

const drob& drob::operator/=(const drob &a)
{
	this->numerator = this->numerator*a.denominator;
	this->denominator = this->denominator*a.numerator;
	return *this;
}

void drob::operator+=(int a)
{
	this->numerator += this->denominator * a;
}

void drob::operator-=(int a)
{
	this->numerator -= this->denominator * a;
}

void drob::operator*=(int a)
{
	this->numerator *= a;
}

void drob::operator/=(int a)
{
	this->denominator *= a;
}

const drob & drob::operator++()
{
	this->numerator += this->denominator;
	return *this;
}

const drob & drob::operator--()
{
	this->numerator -= this->denominator;
	return *this;
}

const drob & drob::operator++(int)
{
	//this - 3/2
	//1
	/*drob tmp;
	tmp.numerator = this->numerator;
	tmp.denominator = this->denominator;*/
	//2
	//drob tmp(this->numerator, this->denominator);
	drob tmp(*this); //copy constructor
	this->numerator += this->denominator;
	return tmp;
}

const drob & drob::operator--(int)
{
	drob tmp(*this); //copy constructor
	this->numerator -= this->denominator;
	return tmp;
}

drob::operator double() const
{
	return this->getDouble();
}

drob::operator int() const
{
	return this->numerator / this->denominator;
}

//drob drob::operator+(const drob & a)
//{
//	//drob c(*this);
//	drob c;
//	c.numerator = this->numerator;
//	c.denominator = this->denominator;
//	c += a;
//	return c;
//}

drob operator+(const drob &a, const drob &b)
{
	drob c = a;
	c += b;
	return c;
}

drob operator-(const drob &a, const drob &b)
{
	drob c = a;
	c -= b;
	return c;
}

drob operator*(const drob &a, const drob &b)
{
	drob c = a;
	c *= b;
	return c;
}

drob operator/(const drob &a, const drob &b)
{
	drob c = a;
	c /= b;
	return c;
}

bool operator>(const drob &a, const drob &b)
{
	return a.getDouble() > b.getDouble();
}

bool operator<(const drob &a, const drob &b)
{
	return a.getDouble() < b.getDouble();
}

bool operator>=(const drob &a, const drob &b)
{
	return a.getDouble() >= b.getDouble();
}

bool operator<=(const drob &a, const drob &b)
{
	return a.getDouble() <= b.getDouble();
}

bool operator!=(const drob &a, const drob &b)
{
	return a.getDouble() != b.getDouble();
}

bool operator==(const drob &a, const drob &b)
{
	return a.getDouble() == b.getDouble();
}

drob operator+(const drob &a, int b)
{
	Fraction c = a;
	c += b;
	return c;
}

drob operator-(const drob & a, int b)
{
	drob c = a;
	c -= b;
	return c;
}

drob operator*(const drob & a, int b)
{
	drob c = a;
	c *= b;
	return c;
}

drob operator/(const drob & a, int b)
{
	drob c = a;
	c /= b;
	return c;
}

bool operator>(const drob & a, int b)
{
	return a.getDouble() > b;
}

bool operator<(const drob & a, int b)
{
	return a.getDouble() < b;
}

bool operator>=(const drob & a, int b)
{
	return a.getDouble() >= b;
}

bool operator<=(const drob & a, int b)
{
	return a.getDouble() <= b;
}

bool operator!=(const drob & a, int b)
{
	return a.getDouble() != b;
}

bool operator==(const drob & a, int b)
{
	return a.getDouble() == b;
}

drob operator+(int a, const drob & b)
{
	drob c = b;
	c += a;
	return c;
}

drob operator-(int a, const drob & b)
{
	drob c = b;
	c -= a;
	return -c;
}

drob operator*(int a, const drob & b)
{
	drob c = b;
	c *= a;
	return c;
}

drob operator/(int a, const drob & b)
{
	drob c = b;
	c /= a;
	c = inverseFraction(c);
	return c;
}

bool operator>(int a, const drob & b)
{
	return a > b.getDouble();
}

bool operator<(int a, const drob & b)
{
	return a < b.getDouble();
}

bool operator>=(int a, const drob & b)
{
	return a >= b.getDouble();
}

bool operator<=(int a, const drob & b)
{
	return a <= b.getDouble();
}

bool operator!=(int a, const drob & b)
{
	return a != b.getDouble();
}

bool operator==(int a, const drob & b)
{
	return a == b.getDouble();
}

drob operator-(drob b)
{
	drob tmp(b);
	tmp.setNumerator(tmp.getNumerator() * -1);
	return tmp;
}

drob inverseFraction(drob b)
{
	drob tmp(b);
	tmp.setNumerator(b.getDenominator());
	tmp.setDenominator(b.getNumerator());
	return tmp;
}

std::ostream& operator<<(std::ostream &out, const drob & a)
{
	out << a.getDouble();
	return out;
}

std::istream& operator >> (std::istream &in, drob & a)
{
	int x, y;
	std::cout << "¬ведите числитель\n";
	in >> x;
	std::cout << "¬ведите знаменатель\n";
	in >> y;
	a.setNumerator(x);
	a.setDenominator(y);
	return in;
}