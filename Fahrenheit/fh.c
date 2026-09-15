#include <stdio.h>

int main(void) {

	double temperatureF;
	double temperatureC;

	printf("Enter temperature in Fahrenheit\n");
	scanf_s("%lf",&temperatureF);

	temperatureC = ((temperatureF - 32) * ((double)5 / 9));
	printf("Temperature in Centigrads: %.2f\n", temperatureC);

	getchar;
	return 0;
}