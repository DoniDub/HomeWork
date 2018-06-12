#include <vector>
#include <string>
#include <iostream>
#include <list>
#include <iterator>
#include <fstream>
using namespace std;

void main()
{
	vector<double> v = { 1.1,2.5,3.3,4.9, 172.34, 30, 0.9834 };
	ofstream file("1.txt");

	ostream_iterator<double> os(file, "\t");
	copy(v.begin(), v.end(), os);
	file.close();

	
	vector<double> v1;
	ifstream f("1.txt");
	istream_iterator<double> it(f);
	copy(it, istream_iterator<double>(), back_inserter(v1));
	for (size_t i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	
	
	
	
	//int *arr = new int[4]{ 1, 2, 3, 4 };
	//for (int *a = arr; a < (arr+4); a++) //size_t i = 0; i < 4; i++
	//{
	//	cout << *a << " "; //cout << arr[i] <<" ";
	//}
	
	//vector<int> v = { 1, 2, 3, 4 };
	//vector<int>::iterator it;
	//for (it = v.begin(); it < v.end();  it++)
	//{
	//	cout << *it << " ";
	//}
	
	/*list<int> v = { 1, 2, 3, 4 };
	list<int>::iterator it;
	for (it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	distance(l.end() << l.begin);*/

	/*vector<int>::iterator it = v.begin();
	vector<int>::reverse_iterator rit = v.rbegin();
	vector<int>::const_iterator cit = v.cbegin();
	vector<int>::const_reverse_iterator crit = v.crbegin();
	for (vector<int>::reverse_iterator rIt = v.rbegin(); rIt != v.rend(); rIt++)
	{
		cout << *rIt << " ";
	}*/
	
	/*vector<int> v = { 1, 2, 3, 4 };
	ofstream file("1.txt");
	
	ostream_iterator<int> os(file," ");
	copy(v.begin(), v.end(), os);
	
	file.close();*/
	
	/*vector<char> str;
	str.reserve(150);
	cout << "size = " << str.size() << endl;
	cout << "max size = " << str.max_size() << endl;
	cout << "capacity = " << str.capacity() << endl;
	cout << "length = " << str.length() << endl;
	
	str.push_back('q');*/
	
	/*string p = "kazok";
	string p2 = p;
	reverse(p.begin(), p.end());
	cout << boolalpha << (p == p2);*/


	system("pause");
}