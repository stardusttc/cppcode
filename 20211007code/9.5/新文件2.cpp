#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int a[10], n, sum = 0;
	for (int i = 0; i <= 9; i++) {
		scanf("%d ", &a[i]);
	}
	scanf("%d", &n);
	for (int i = 0; i <= 9; i++) {
		if (a[i] <= n + 30) {
			sum++;
		}
	}
	printf("%d", sum);
	return 0;
}
