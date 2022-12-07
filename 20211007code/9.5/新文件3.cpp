#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int a[n], b, sum = 0;
	for (int i = 0; i <= n - 1; i++) {
		scanf("%d ", &a[i]);
	}
	scanf("%d", &b);
	for (int i = 0; i <= n - 1; i++) {
		if (a[i] <= b + 30) {
			sum++;
		}
	}
	printf("%d", sum);
	return 0;
}
