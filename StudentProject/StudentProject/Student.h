#pragma once
#include <iostream>
#include <ctime>
#include "Vector.h"
#include "String.h"
class Student
{
private:
	String name;
	String surname;
	int age;
	int id;
	Vector<int> marks;
public:
	Student(String name = "Name", String surname = "Surname", int age = 18, int id = 0, Vector<int> marks = Vector <int>());
	void setName(String name);
	void setSurname(String surname);
	void setAge(int age);
	void setId(int id);
	void setMarks(Vector<int> marks);
	
	String getName();
	String getSurname();
	int getAge();
	int getId();
	Vector<int> getMarks();

	void addMark(int mark);
	void deleteLastMarks();
	int getAvgMark();

	friend std::ostream& operator<<(std::ostream &out, const Student &obj);
};

