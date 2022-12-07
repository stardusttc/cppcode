#include <iostream>

#include <cstdio>

using namespace std;
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		if (i % 2 == 0) {
			printf("%d ", i);
		}
	}


	return 0;
}

