#include "Student.h"

Student::Student(String name, String surname, int age, int id, Vector<int> marks)
{
	this->setName(name);
	this->setSurname(surname);
	this->setAge(age);
	this->setId(id);
	this->setMarks(marks);
}

void Student::setName(String name)
{
	this->name = name;
}

void Student::setSurname(String surname)
{
	this->surname = surname;
}

void Student::setAge(int age)
{
	this->age = age;
}

void Student::setId(int id)
{
	this->id = id;
}

void Student::setMarks(Vector<int> marks)
{
	this->marks = marks;
}

String Student::getName()
{
	return this->name;
}

String Student::getSurname()
{
	return this->surname;
}

int Student::getAge()
{
	return this->age;
}

int Student::getId()
{
	return this->id;
}

Vector<int> Student::getMarks()
{
	return this->marks;
}

void Student::addMark(int mark)
{
	this->marks.push_back(mark);
}

int Student::getAvgMark()
{
	int sum = 0;
	for (size_t i = 0; i < this->marks.getSize(); i++)
	{
		sum += this->marks[i];
	}
	return sum / this->marks.getSize();
}


std::ostream & operator<<(std::ostream & out, const Student & obj)
{
	out << obj.name << std::endl << obj.surname;
	out << std::endl << obj.age << std::endl << obj.id << std::endl << obj.marks;
	return out;
}
