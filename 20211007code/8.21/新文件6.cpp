#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int a, i = 1;
	scanf("%d", &a);
	while (i <= a) {
		if (a % i == 0) {
			printf("No");
			break;
		} else {
			printf("Yes");
			break;
		}
		i++;
	}
	if(a==2){
	}
	return 0;
}