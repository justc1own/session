#include <iostream>

long long getFactorial(long long x) {
	long long res = 1;
	if (x > 20) {
		return -1;
	}
	if (x == 0 || x == 1) {
		return res;
	}
	for (long long i = 2; i <= x; i++) {
		res *= i;
	}
	return res;
}
