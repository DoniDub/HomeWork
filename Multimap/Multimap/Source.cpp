#include <iostream>
#include <map>
#include <string>

int main()
{
	std::multimap<std::string, std::string> m;
	m.insert(std::make_pair("Kurama", "+77016695843"));
	m.insert(std::make_pair("Kokuo", "+77073652000"));
	m.insert(std::make_pair("Shukaku", "+77015608815"));
	m.insert(std::make_pair("Giuki", "+77023267580"));
	m.insert(std::make_pair("Choumei", "+77478000008"));
	m.insert(std::make_pair("Saiken", "+77003206620"));
	m.insert(std::make_pair("Matatabi", "+77029959599"));
	m.insert(std::make_pair("Isobu", "+77010124578"));

	std::string str;
	std::cout << "Enter surname" << std::endl;
	std::cin >> str;
	auto it = m.equal_range(str);
	for (auto i = it.first; i != it.second; i++)
	{
		std::cout << i->first << " " << i->second << std::endl;
	}


	system("pause");
	return 0;
}