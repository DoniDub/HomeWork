#pragma once
#include <iostream>
class String
{
private:
	char *str;
	int len;
public:
	String();
	String(const char* st);
	String(const String &obj);
	String& operator=(const String &s);

	void setStr(char* st);
	const char* data() const;
	int length() const { return this->len; }
	void clear();
	bool empty() const;
	const String& operator+=(const String &str);
	void append();

	char& String::operator[](int ind);
	char& String::operator[](int ind) const;

	~String();
};

std::ostream & operator<<(std::ostream &out, const String &a);
std::istream & operator >> (std::istream &in, String &a);

bool operator==(const String & a, const String & b);