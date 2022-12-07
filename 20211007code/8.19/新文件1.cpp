#include <iostream>

#include <cstdio>

using namespace std;
int main() {
	int sum = 0, n, a;
	scanf("%d", &n);
	for (int i = 1;  i <= n; i++) {
		scanf("%d", &a);
		sum = sum + a;
		printf("%d ", sum);
	}
	return 0;
}

