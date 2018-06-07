#include "Vector.h"



template<class T>
Vector<T>::Vector()
{
	this->size = 0;
	this->arr = nullptr;
}

template<class T>
Vector<T>::Vector(const Vector<T>& obj)
{
	this->size = obj.size;
	if (this->size == 0)
		this->arr = nullptr;
	else
	{
		this->arr = new T[size];
		for (size_t i = 0; i < this->size; i++)
		{
			this->arr[i] = obj.arr[i];
		}
	}
}

template<class T>
Vector<T>& Vector<T>::operator=(const Vector<T>& obj)
{
	if (&obj == this)
		return *this;
	this->~Vector();
	this->size = obj.size;
	if (this->size == 0)
		return *this;
	this->arr = new T[obj.size];
	for (int i = 0; i < this->size; i++)
	{
		this->arr[i] = obj.arr[i];
	}
	return *this;
}

template<class T>
Vector<T>::~Vector()
{
	if (this->arr != nullptr)
	{
		delete[] this->arr;
		this->arr = nullptr;
	}
	this->size = 0;
}

template<class T>
int Vector<T>::getSize() const
{
	return this->size;
}

template<class T>
T * Vector<T>::data()
{
	return this->arr;
}

template<class T>
const T * Vector<T>::data() const
{
	return this->arr;
}

template<class T>
void Vector<T>::clear()
{
	this->~Vector();
}

template<class T>
bool Vector<T>::empty() const
{
	return this->size == 0;
}

template<class T>
void Vector<T>::push_back(const T & b)
{
	T *new_arr;
	if (this->size == 0)
	{
		new_arr = new T[1];
		new_arr[0] = b;
	}
	else
	{
		new_arr = new T[size + 1];
		for (size_t i = 0; i < size; i++)
		{
			new_arr[i] = this->arr[i];
		}
		new_arr[size] = b;
	}
	++size;
	delete[] this->arr;
	this->arr = new_arr;
}

template<class T>
void Vector<T>::pop_back()
{
	if (this->size == 0) return;
	if (this->size == 1)
	{
		this->~Vector();
		return;
	}
	T *new_arr = new T[size - 1];
	for (size_t i = 0; i < this->size - 1; i++)
	{
		new_arr[i] = this->arr[i];
	}
	--size;
	delete[] this->arr;
	this->arr = new_arr;
}

template<class T>
void Vector<T>::reverse()
{
	for (size_t i = 0; i < this->size / 2; i++)
	{
		std::swap(this->arr[i], this->arr[size - i - 1]);
	}
}

template<class T>
void Vector<T>::erase(int pos)
{
	if (pos >= 0 && pos < this->size)
	{
		for (size_t i = pos; i < this->size - 1; i++)
		{
			std::swap(this->arr[i], this->arr[i + 1]);
		}
		this->pop_back();
	}
}

template<class T>
void Vector<T>::insert(int pos, const T value)
{
	T *new_arr = new T[size + 1];
	int mark = 0;
	for (size_t i = 0; i < size + 1; i++)
	{
		if (i == pos)
		{
			new_arr[i] = val;
			mark = 1;
		}
		else
			new_arr[i] = this->arr[i - mark];
	}
	++size;
	if (this->arr != nullptr)
		delete[] this->arr;
	this->arr = new_arr;
}

template<class T>
Vector<T>& Vector<T>::operator+=(const Vector<T>& obj)
{
	int s = obj.size;
	if (obj.empty())
		return *this;
	for (size_t i = 0; i < s; i++)
	{
		this->push_back(obj.arr[i]);
	}
	return *this;
}

template<class T>
T & Vector<T>::operator[](int pos)
{
	return arr[pos];
}

template<class T>
T & Vector<T>::operator[](int pos) const
{
	return arr[pos];
}

template<class TT>
std::ostream & operator<<(std::ostream & out, const Vector<TT>& a)
{
	for (size_t i = 0; i < a.size; i++)
	{
		out << a.arr[i] << ' ';
	}
	out << std::endl;
	return out;
}

template<class TT>
std::istream & operator >> (std::istream & in, Vector<TT>& a)
{
	a.clear();
	std::cout << "Enter size\n";
	int size;
	while (size <= 0)
		in >> size;
	std::cout << "Enter array\n";
	T obj;
	for (size_t i = 0; i < size; i++)
	{
		in >> obj;
		a.push_back(obj);
	}
	return in;
}