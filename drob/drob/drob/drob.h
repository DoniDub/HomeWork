#pragma once
#include <iostream>

class drob
{
private:
	int numerator; //числитель
	int denominator; //знаменатель
public:
	explicit drob(int numerator = 0, int denominator = 1);

	void setNumerator(int numerator = 0);
	void setDenominator(int denominator = 1);
	int getNumerator() const;
	int getDenominator() const;

	const drob& operator+=(const drob &a); //this += a
	const drob& operator-=(const drob &a); //this -= a
	const drob& operator*=(const drob &a); //this *= a
	const drob& operator/=(const drob &a); //this /= a
	void operator+=(int a);
	void operator-=(int a);
	void operator*=(int a);
	void operator/=(int a);

	//prefix
	const drob& operator++();
	const drob& operator--();
	//postfix
	const drob& operator++(int);
	const drob& operator--(int);

	double getDouble() const;
	operator double() const;
	operator int() const;

	//перегрузка операции + в виде метода класса
	//drob operator+(const drob &a);
};

//перегрузка операции + в виде глобальной функции
drob operator+(const drob &a, const drob &b);
drob operator-(const drob &a, const drob &b);
drob operator*(const drob &a, const drob &b);
drob operator/(const drob &a, const drob &b);
bool operator>(const drob &a, const drob &b);
bool operator<(const drob &a, const drob &b);
bool operator>=(const drob &a, const drob &b);
bool operator<=(const drob &a, const drob &b);
bool operator!=(const drob &a, const drob &b);
bool operator==(const drob &a, const drob &b);

drob operator+(const drob &a, int b);
drob operator-(const drob &a, int b);
drob operator*(const drob &a, int b);
drob operator/(const drob &a, int b);
bool operator>(const drob &a, int b);
bool operator<(const drob &a, int b);
bool operator>=(const drob &a, int b);
bool operator<=(const drob &a, int b);
bool operator!=(const drob &a, int b);
bool operator==(const drob &a, int b);

drob operator+(int a, const drob &b);
drob operator-(int a, const drob &b);
drob operator*(int a, const drob &b);
drob operator/(int a, const drob &b);
bool operator>(int a, const drob &b);
bool operator<(int a, const drob &b);
bool operator>=(int a, const drob &b);
bool operator<=(int a, const drob &b);
bool operator!=(int a, const drob &b);
bool operator==(int a, const drob &b);

drob operator-(drob b);
drob inverseFraction(drob b); //обратная дробь

std::ostream& operator<<(std::ostream &out, const drob &a);
std::istream& operator >> (std::istream &in, drob &a);