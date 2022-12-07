//4个数 从大到小
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int a, b, c, d, t;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if (b > a) {
		t = a;
		a = b;
		b = t;
	}
	if (c > a) {
		t = c;
		c = a;
		a = t;
	}
	if (c > b) {
		t = c;
		c = b;
		b = t;
	}
	if (d > a) {
		t = d;
		d = a;
		a = t;
	}
	if (d > b) {
		t = d;
		d = b;
		b = t;
	}
	if (d > c) {
		t = c;
		c = d;
		d = t;
	}
	printf("转换后：%d %d %d %d", a, b, c, d);
}