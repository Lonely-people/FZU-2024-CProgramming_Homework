#include <stdio.h>

int main() {
	int a = 87, b = 72, c = 93;
	printf("math = %d, ", a);
	printf("eng = %d, ", b);
	printf("comp = %d, ", c);
	int avg = (a + b + c) * 1.0 / 3.0;
	printf("average = %d\n", avg);
	return 0;
}