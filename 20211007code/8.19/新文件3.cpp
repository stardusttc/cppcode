#include <iostream>

#include <cstdio>

using namespace std;
int main() {
	int a, b = 1;
	scanf("%d", &a);
	for (int i = 1; i <= a;) {
		for (int j = 1; j <= b; j++) {
			printf("%d ", i);
			i++;
		}
		b++;
		printf("\n");
	}

	return 0;
}


