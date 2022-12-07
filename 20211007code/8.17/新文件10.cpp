#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int a, b, c, d, e, t;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	t = a;
	if (b < t) {
		t = b;
	}
	if (c < t) {
		t = c;
	}
	if (d < t) {
		t = d;
	}
	if (e < t) {
		t = e;
	}
	printf("%d", t);
}