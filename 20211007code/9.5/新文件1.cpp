#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int a[10];
	for (int i = 1; i <= 9; i++) {
		scanf("%d ", &a[i]);
	}
	for (int i = 1; i <= 9; i++) {
		printf("%d", a[i]);
	}
	return 0;
}
