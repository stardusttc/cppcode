#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int high, up, down, speed, day;
	scanf("%d %d %d", &high, &up, &down);
	high = high - up;
	speed = up - down;
	day = high / speed;
	if (high % speed != 0) {
		day = day + 1;
	}
	day = day + 1;
	printf("%d", day);
	return 0;
}