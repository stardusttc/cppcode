#include <iostream>

#include <cstdio>

using namespace std;
int main() {
	/*int a;
	scanf("%d", &a);
	printf("  %d\n", a);
	printf(" %d%d%d\n", a, a, a);
	printf("%d%d%d%d%d\n", a, a, a, a, a);*/
	int n = 3;
	char a;
	//nΪ��������aΪ������ַ�
	scanf("%c", &a);
	for (int i = 1; i <= n; i++) { //iΪ��ǰ����
		for (int j = 1; j <= n - i; j++) {
			printf(" ");
		}
		for (int j = 1; j <= 2 * i - 1; j++) {
			printf("%c", a);
		}
		printf("\n");
	}
	return 0;
}

