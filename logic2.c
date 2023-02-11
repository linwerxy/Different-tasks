#include <stdio.h>

int main() {
	printf("x y z w\n");
	for (int x = 0; x <= 1; x++)
		for (int y = 0; y <= 1; y++)
			for (int z = 0; z <= 1; z++)
				for (int w = 0; w <= 1; w++)
					if ((x || !y) && !(y == z) && w) {
						printf("%d %d %d %d\n", x, y, z, w);
					}

	return 0;
}