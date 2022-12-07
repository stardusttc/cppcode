#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int sum = 0, n, a;
	printf("几个数求和：");
	scanf("%d", &n);
	printf("请输入数：");
	for (int i = 1;  i <= n; i++) {
		scanf("%d", &a);
		sum = sum + a;
	}
	printf("%d", sum);
	return 0;
}
