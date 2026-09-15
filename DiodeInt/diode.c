#include <stdio.h>

int main(void) {
	float I = 0.2;
	int R = 150;
	int V = 30;
	float I² = I * I;
	printf("Voltage\n");
	printf("U=R*I=%d*%.2fA=%.fV\n", R, I, R * I);
	printf("Power\n");
	printf("P=U*I=%d*%.2f=%.2fW\n",V,I,V*I);
	printf("P=I^2*R=%.2f*%d=%.2fW\n",I²,R, I²*R);
	
	return 0;
}