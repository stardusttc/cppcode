#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int a, sum = 0;
	scanf("%d", &a);
	for (int i = 2; i <= a - 1; i++) {
		if (a % i == 0) {
			sum++;
			break;
		}
	}
	if (sum == 0) {
		printf("Yes");
	} else {
		printf("No");
	}

	return 0;
}