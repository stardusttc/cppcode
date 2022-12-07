#include <iostream>

#include <cstdio>

using namespace std;
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	for (int m = 0; m <= a; m++) {
		for (int n = 0; n <= a; n++) {
			for (int k = 0; k <= a; k++) {
				if (m * 3 + n * 2 + k / 2 == b && m + n + k == a && k % 2 == 0) {
					printf("%d %d %d\n", m, n, k);
				}
			}
		}
	}
	return 0;
}

