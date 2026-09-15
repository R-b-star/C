#include <stdio.h>

int main(void) {

	int c1 = 24;
	int c2 = 24;
	int c3 = 25;
	int c4 = 26;
	int sum = c1 + c2 + c3 + c4;
	int number = sum / 8;
	int falta = sum % 8;

	printf("Pupils in each team:%d\n", number);
	printf("Left over:%d\n", falta);
}