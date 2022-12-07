#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int a[6], n;
	for (int i = 0; i <= 4; i++) {
		scanf("%d", &a[i]);
	}
	scanf("%d", &n);
	for (int i = 0; i <= 4; i++) {
		if (a[i] >= n) {
			for (int j = 5; j > i; j--) {
				a[j] = a[j - 1];
			}
			a[i] = n;
			break;
		} else {
			a[5] = n;
		}
	}
	for (int i = 0; i <= 5; i++) {
		printf("%d ", a[i]);
	}

	return 0;
}