#include <stdio.h>

int main(void) {
	int count = 0, max = 0;
	for (int i = 1016; i <= 7937; i++) {
		if (i % 3 == 0) {
			if (i % 7 != 0 && i % 17 != 0 && i % 19 != 0 && i % 27 != 0) {
				count += 1;
				if (i > max) { max = i; }
			}
		}
	}
	printf("%d %d", count, max);
	return 0;
}