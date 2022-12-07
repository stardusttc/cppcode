#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int a, b, c, t;
	scanf("%d %d %d", &a, &b, &c);
	t = a;
	if (b < t) {
		t = b;
	}
	if (c < t) {
		t = c;
	}
	printf("%d", t);
}