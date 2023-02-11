#include <stdio.h>
#include <math.h>

int base_10_y(int x, int y) {
	int P = 1, num = 0;
	while (x != 0) {
		num += (x % y) * P;
		x = x / 2;
		P *= 10;
	}
	return num;
}

int base_y_10(int x, int y) {
	int P = 0, num = 0;
	while (x != 0) {
		num += (x % 10) * pow(y, P);
		x = x / 10;
		P += 1;
	}
	return num;
}

int main() {
	printf("%d", base_10_y(41, 2));
	printf("%d", base_y_10(101001, 2));

	return 0;
}