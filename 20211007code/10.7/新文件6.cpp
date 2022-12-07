#include <iostream>

#include <cstdio>

using namespace std;
int main() {
	int a, b, c;
	scanf("%d", &a);
	b = a;
	c = 0;
	for (int i = 1; i <= a; i++) {
		c = c + b * b - b;
		b = b - 1;
	}
	return 0;
}

