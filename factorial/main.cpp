#include <iostream>
#include <stdio.h>
#include "factorial.h"

int main() {
	long long a;
	std::cin >> a;

	long long factorial_a = getFactorial(a);
	if (factorial_a == -1) {
		std::cout << "Too big number: " << factorial_a;
	} else {
		std::cout << factorial_a;
	}
	
}