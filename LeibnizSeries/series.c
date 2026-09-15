#include <stdio.h>

int main(void) {

	float sum=0.0;
	for (int N = 0; N < 7; N++) {

		if (N % 2 == 0) {
		sum+= 1.0 / (2 * N + 1);
		}else 
			sum+= -1,0 / (2 * N + 1);
		printf("N=%d, pi=%.2f\n",N, 4*sum);
	}
	
	return 0;
}