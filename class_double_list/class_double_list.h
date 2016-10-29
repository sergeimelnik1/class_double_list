#pragma once
#include <iostream>
using namespace std;

class double_linked_list {
private:

	struct Node {
		int data;
		struct Node *next;
		struct Node *prev;
	};
	Node* head,* tail;

public:

	double_linked_list();
	~double_linked_list();
	bool isempty();
	void printlist();
	void append(int number);
	void add(int number);
	void deletehead();
	void deletend();
	Node* search(int val);
	void deleteElem(int number);
	void insert(int number, int after);
	void sort();
};
