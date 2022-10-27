#pragma once 
#include <iostream>
#include "list.h"

extern node* phead = nullptr;

bool checkInList(const int x) {
	node* tmp = phead;
	while (tmp) {
		if (tmp->data == x) {
			return true;
		} else {
			tmp = tmp->next;
		}
	}
	return false;
}

int getNode(const int x) {
	node* tmp = phead;
	while (tmp) {
		if (tmp->data == x) {
			return (tmp->data);
		} else {
			tmp = tmp->next;
		}
	}
	
	return -1;
}

node* create(int x) {
	node* Node = new node(x);
	return Node;
}

void addToList(int x) {
	node* pnew = create(x);

	if (phead == nullptr) {
		phead = pnew;
	} else {
		node* tmp = phead;
		while (tmp->next != nullptr) {
			tmp = tmp->next;
		}
		tmp->next = pnew;	
	}
	return;
}

void outList() {
	node* tmp = phead;
	while (tmp != nullptr) {
		std::cout << tmp->data << std::endl;
		tmp = tmp->next;
	}
}