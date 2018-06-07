#pragma once
#include <iostream>
template<class T>
class Vector
{
private:
	int size;
	T *arr;
public:
	Vector();
	Vector(const Vector<T>&obj);
	Vector<T> & operator=(const Vector<T> & obj);
	~Vector();

	int getSize() const;
	T* data();
	const T* data() const;
	void clear();
	bool empty() const;
	void push_back(const T &b);
	void pop_back();
	void reverse();
	void erase(int pos);
	void insert(int pos, const T value);
	Vector<T>& operator+=(const Vector<T> &obj);
	//T at(int pos);
	T& operator[](int pos);
	T& operator[](int pos) const;
	template<class TT>
	friend std::ostream& operator<<(std::ostream &out, const Vector<TT> &a);
	template<class TT>
	friend std::istream& operator >> (std::istream &in, Vector<TT> &a);

};
template<class TT>
std::ostream& operator<<(std::ostream &out, const Vector<TT> &a);
template<class TT>
std::istream& operator >> (std::istream &in, Vector<TT> &a);