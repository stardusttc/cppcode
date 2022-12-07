#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int sum = 0, m, n, t;
	printf("«Î ‰»Îm:");
	scanf("%d", &m);
	printf("«Î ‰»În:");
	scanf("%d", &n);
	if (n < m) {
		t = m;
		m = n;
		n = t;
	}
	for (int i = m;  i <= n; i++) {
		sum = sum + i;
	}
	printf("%d", sum);
	return 0;
}
