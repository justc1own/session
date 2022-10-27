#include <iostream>
#include <string>
#include "compleX.h"

void outComplex(const std::string& s, compleX* A) {
	std::cout << s << " = " << A->real << " + " << A->img << "*i\n";
}

int main() {
	double a1, a2, b1, b2;
	std::cin >> a1 >> b1 >> a2 >> b2;

	compleX* A = new compleX(a1, b1);
	compleX* B = new compleX(a2, b2);
	compleX* sum = sumC(A, B);
	compleX* subtr = subtrC(A, B);
	compleX* mlt = mltC(A, B);
	compleX* div = divC(A, B);

	outComplex("sum", sum); outComplex("subtr", subtr); outComplex("mlt", mlt); outComplex("div", div);
}