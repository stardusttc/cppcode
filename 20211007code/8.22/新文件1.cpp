#include <iostream>

#include <cstdio>

using namespace std;
int main() {
	int high, inair = 0, up = 0;
	scanf("%d", &high);
	inair = high;
	while (high != 0) {
		high = high / 2;
		inair = inair + high * 2;
		up++;
	}
	printf("%d %d", up, inair);


	return 0;
}

