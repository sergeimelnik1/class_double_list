#include "stdafx.h"
#include "double_linked_list.h"


int main()
{
	int num;
	double_linked_list list;
	for (int i = 1; i < 10; i++){
		cout << "a= ";
		cin >> num;
		list.append(num);
	}
	list.printlist();
	//Удаляем элемент со значением 4;
	list.deleteElem(4);
	list.printlist();
	//Добавление элемента со значением 9 после 5;
	list.insert(9, 5);
	list.printlist();
	//Сортировка списка по возрастанию
	list.sort();
	list.printlist();
	system("pause");
    return 0;
}
