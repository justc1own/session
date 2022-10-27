#include<iostream>

int** getMlt(const int n1, int m1, int n2, int m2, int** A, int** B) {
	/*int n1 = sizeof(A) / sizeof(A[0][0]);
	int m1 = sizeof(A[0][0]);

	int n2 = sizeof(B) / sizeof(B[0][0]);
	int m2 = sizeof(B[0][0]);
	*/
	std::cout << "n1=" << n1 << " m1=" << m1 << " n2=" << n2 << " m2=" << m2 << std::endl;

	int** ANS = new int* [n1];
	for (int i = 0; i < n1; i++) {
		ANS[i] = new int[m2];
	}
	for (int i = 0; i < n1; i++) {
		for (int j = 0; j < m2; j++) {
			int res = 0;
			for (int k = 0; k < m1; k++) {
				res += A[i][k] * B[k][j];
			}

			ANS[i][j] = res;
		}
	}

	return ANS;
}