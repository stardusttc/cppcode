#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	if (a % b == 0) {
		printf("yes");
	} else {
		printf("no");
	}
	return 0;
}