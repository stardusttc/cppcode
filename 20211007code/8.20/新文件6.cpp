#include <iostream>

#include <cstdio>

using namespace std;
int main() {
	int n, sum = 0;
	scanf("%d", &n);
	if (n == 0) {
		sum++;
	}
	while (n != 0) {
		n = n / 10;
		sum++;
	}
	printf("%d", sum);
	return 0;
}


