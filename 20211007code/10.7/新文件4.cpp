#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int a, b, c, t;
	scanf("%d %d %d", &a, &b, &c);
	if (b < a) {
		t = a;
		a = b;
		b = t;
	}
	if (c < a) {
		t = c;
		c = a;
		a = t;
	}
	if (c < b) {
		t = c;
		c = b;
		b = t;
	}
	printf("%d", a);
}