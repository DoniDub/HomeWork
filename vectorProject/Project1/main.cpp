#include <ctime>
#include "VectorMy.h"
#include <vector>

/*void inc(VectorMy&d) {
	for (size_t i = 0; i < d.getSize(); i++)
	{
		d[i]++;
	}
}
int getMax(const VectorMy&d) {
	d[5]++;
	int max = d[5];
	return max;
}*/



void main() {
	VectorMy();
	
	srand(time(NULL));

	VectorMy v;
	for (size_t i = 0; i < 9; i++)
	{
		v.push_back(rand() % 10);
	}
	v.print();
	std::cout << "-------------\n";

	v.insert(4, 9);
	v.print();
	std::cout << "-------------\n";

	v.erase(2);
	v.print();
	std::cout << "-------------\n";

	v.reverse();
	v.print();

	/*VectorMy v(10, 5);
	std::cout << v;*/
	VectorMy s(4, 5);
	v += s;
	std::cout << v;

	/*VectorMy vec;
	vec.push_back(150);
	vec.print();
	for (size_t i = 0; i < 9; i++)
	{
	vec.push_back(rand() % 10);
	}
	VectorMy v2 = vec;
	std::cout << "-------------\n";
	vec.print();
	std::cout << "-------------\n";
	v2.print();
	std::cout << "-------------\n";
	vec.print();
	for (size_t i = 0; i < 15; i++)
	{
	vec.pop_back();
	vec.print();
	}*/
}

