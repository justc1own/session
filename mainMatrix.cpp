#include <iostream>
#include "matrix.h"

int main() {
	int n1, m1, n2, m2;
	std::cin >> n1 >> m1 >> n2 >> m2;

	int** A = new int* [n1];
	for (int i = 0; i < n1; i++) {
		A[i] = new int[m1];
	}
	int** B = new int* [n2];
	for (int i = 0; i < n2; i++) {
		B[i] = new int[m2];
	}

	for (int i = 0; i < n1; i++) {
		for (int j = 0; j < m1; j++) {
			std::cin >> A[i][j];
		}
	}

	for (int i = 0; i < n2; i++) {
		for (int j = 0; j < m2; j++) {
			std::cin >> B[i][j];
		}
	}


	if (m1 != n2) {
		std::cout << "Wrong sizes";
		return 0;
	}
	//return 0;
	int **ANS = getMlt(n1, m1, n2, m2, A, B);
	for (int i = 0; i < n1; i++) {
		for (int j = 0; j < m2; j++) {
			std::cout << ANS[i][j] << " ";
		}
		std::cout << "\n";
	}
}