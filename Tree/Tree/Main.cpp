#include "Tree.h"
#include <string>

void tree()
{
	setlocale(0, "");
	Tree<int, string> tree;
	tree.add(100, "���");
	tree.add(0, "����");
	tree.add(-30, "����� ��������");
	tree.add(77, "��������� ����");
	tree.add(101, "��� ����");
	tree.add(25, "�������� ����");
	tree.add(9, "������");
	tree.add(7, "����");
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