#include <iostream>

#include <cstdio>

using namespace std;
int main() {
	int n, b, s, g;
	scanf("%d", &n);
	g = n % 10;
	s = n % 100 / 10;
	b = n / 100;
	printf("%d%d%d", g, s, b);
	return 0;
}


