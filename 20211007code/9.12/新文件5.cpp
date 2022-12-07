#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int a[100];
	for (int i = 0; i <= 3; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 3; i >= 0; i--) {
		printf("%d", a[i]);
	}

	return 0;
}