#include <iostream>

#include <cstdio>

using namespace std;
int main() {
	int s;
	scanf("%d", &s);
	if (s >= 90) {
		printf("Excellent");
	} else if (s >= 60 && s < 90) {
		printf("Pass");
	} else {
		printf("Fail");
	}


	return 0;
}

