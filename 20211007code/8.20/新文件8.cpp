#include <iostream>

#include <cstdio>

using namespace std;
int main() {
	int a, b, c, sum = 0;
	scanf("%d", &b);
	for (int i = 1; i <= b; i++) {
		c = i;
		while (c != 0) {
			a = c % 10;
			if (a == 1) {
				sum++;
			}
			c = c / 10;
		}
	}
	printf("%d", sum);
	return 0;
}