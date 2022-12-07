#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;
int main() {
	char a[101];
	int b;
	gets(a);
	b = strlen(a);
	if (b < 7) {
		printf("no");
	} else {
		printf("%c", a[6]);
	}
	return 0;
}