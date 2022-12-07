#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int a[5];
	for (int i = 0; i <= 4; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 4; i >= 0; i--) {
		scanf("%d ",a[i]);
	}

	return 0;
}
