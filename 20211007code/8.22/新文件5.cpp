#include <iostream>

#include <cstdio>

using namespace std;
int main() {
	int n = 100, a, b, c;
	while (n <= 999) {
		a = n % 10;
		b = n % 100 / 10;
		c = n / 100;
		if (n == a * a * a + b * b * b + c * c * c) {
			printf("%d ", n);
		}
		n++;
	}

	return 0;
}

