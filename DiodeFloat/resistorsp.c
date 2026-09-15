#include <stdio.h>

int main(void) {
	int R1 = 150;
	int R2 = 220;
	int parallel = ((R1 * R2) / R1 + R2);

	printf("Parallel resistance: %d\n", parallel);

	return 0;
}