#pragma once
#pragma once
#include <iostream>

struct node {
	int data;
	node* next;
	
	node(int data, node* next = nullptr) :
		data(data), next(next) {}
};

//node* phead;

bool checkInList(const int x);
int getNode(const int x);
void addToList(int x);
node* create(int x);
void outList();