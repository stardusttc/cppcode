#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int n, s[100], q, k, a, b;
	scanf("%d", &n);
	for (int i = 0; i <= n - 1; i++) {
		scanf("%d", &s[i]);
	}
	scanf("%d", &q);
	for (int i = 1; i <= q; i++) {
		scanf("%d", &k);
		if (k == 1) {
			scanf("%d %d", &a, &b);
			s[a - 1] = b;
		} else {
			scanf("%d", &a);
			printf("%d\n", s[a - 1]);
		}
	}

	return 0;
}