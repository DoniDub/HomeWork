#include "Tree.h"
#include <string>

void tree()
{
	setlocale(0, "");
	Tree<int, string> tree;
	tree.add(100, "Сто");
	tree.add(0, "Ноль");
	tree.add(-30, "Минус тридцать");
	tree.add(77, "Семьдесят семь");
	tree.add(101, "Сто один");
	tree.add(25, "Двадцать пять");
	tree.add(9, "Девять");
	tree.add(7, "Семь");
	tree.print();
	std::cout << std::endl;
	tree.del(25);
	tree.print();
	system("pause");

}

int main()
{
	tree();

	system("pause");
	return 0;
}