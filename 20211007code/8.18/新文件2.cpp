#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int sum = 0, m, n, t;
	printf("������m:");
	scanf("%d", &m);
	printf("������n:");
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
