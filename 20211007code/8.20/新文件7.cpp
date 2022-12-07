#include <iostream>

#include <cstdio>

using namespace std;
int main() {
	int n, sum = 0, a;
	scanf("%d", &n);
	while (n != 0) {
		a = n % 10;
		if (a == 1) {
			sum++;
		}
		n = n / 10;
	}
	printf("%d", sum);
	return 0;
}