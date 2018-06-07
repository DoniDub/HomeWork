#pragma once
#include "Student.h"
class Group
{
private:
	String groupName;
	Vector<Student> group;
public:
	Group(String groupName = "Group Name", Vector<Student> group = Vector<Student>());

	void setGroupName(String groupName);
	void setGroup(Vector<Student> group);

	String getGroupName() const;
	Vector<Student> getGroup() const;

	void addStudent(Student student);
	void deleteStudentById(int id);
	void deleteStudent(int ind);
	void addRandMarks();
	void addMarks();

	friend std::ostream& operator<<(std::ostream &out, const Group &obj);
};

std::ostream& operator<<(std::ostream &out, const Group &obj);
};

