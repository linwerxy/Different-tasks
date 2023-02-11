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

int sum_of_digits(int x) {
	int sum = 0;
	while (x != 0) {
		sum += (x % 10);
		x = x / 10;
	}
	return sum;
}

int alg(int N) {
	N = base_10_y(N, 2);
	N = N * 10 + (sum_of_digits(N) % 2);
	N = N * 10 + (sum_of_digits(N) % 2);
	N = base_y_10(N, 2);
	return N;
}

int main() {
	for (int N = 1; N < 9999; N++) {
		if (alg(N) > 80) { printf("%d\n", alg(N)); break; }
	}
	printf("%d", alg(13));
	return 0;
}