#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int a, sum = 0;
	scanf("%d", &a);
	for (int i = 1; i <= a; i++) {
		if (a % i != 0) {
			printf("No");
			break;
		} else {
			printf("Yes");
			break;
		}
	}

	return 0;
}