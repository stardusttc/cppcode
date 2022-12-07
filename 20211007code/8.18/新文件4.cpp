#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int sum = 0, m, n, t;
	scanf("%d", &m);
	scanf("%d", &n);
	if (n < m) {
		t = m;
		m = n;
		n = t;
	}
	for (int i = 1;  i <= n; i++) {
		if (i % 2 != 0) {
			sum = sum + i;
		}
	}
	printf("%d", sum);
	return 0;
}

