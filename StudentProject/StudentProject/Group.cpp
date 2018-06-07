#include "Group.h"



Group::Group(String groupName, Vector<Student> group)
{
	this->setGroupName(groupName);
	this->setGroup(group);
}

void Group::setGroupName(String groupName)
{
	this->groupName = groupName;
}

void Group::setGroup(Vector<Student> group)
{
	this->group = group;
}

String Group::getGroupName() const
{
	return this->groupName;
}

Vector<Student> Group::getGroup() const
{
	return this->group;
}

void Group::addStudent(Student student)
{
	this->group.push_back(student);
}

void Group::deleteStudentById(int id)
{
	for (size_t i = 0; i < group.getSize(); i++)
	{
		if (group[i].getId() == id)
		{
			group.erase(i);
		}
	}
}

void Group::deleteStudent(int ind)
{
	group.erase(ind - 1);
}

void Group::addRandMarks()
{
	srand(time(NULL));
	for (size_t i = 0; i < group.getSize(); i++)
	{
		group[i].addMark(rand() % 12 + 1);
	}
}

void Group::addMarks()
{
	for (size_t i = 0; i < group.getSize(); i++)
	{
		int mark;
		std::cin >> mark;
		group[i].addMark(mark);
	}
}

std::ostream & operator<<(std::ostream & out, const Group & obj)
{
	out << obj.groupName << std::endl << obj.group;
	return out;
}