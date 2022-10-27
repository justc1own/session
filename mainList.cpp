#include <iostream>
#include "list.h"
//#include "list.cpp"

int main() {
	int n; std::cin >> n;
	//node* phead = nullptr;

	for (int i = 0; i < n; i++) {
		int x; std::cin >> x;
		addToList(x);
	}

	outList();

	/*node* p = phead;
	while (p != nullptr) {
		std::cout << p->data << " ";
		p = p->next;
	}
	*/
}