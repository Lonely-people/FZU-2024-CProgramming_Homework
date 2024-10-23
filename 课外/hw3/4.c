#include <stdio.h>
#include <math.h>

int main() {
	int x; scanf("%d", &x);
	switch (x / 10) {
		case 10:
		case 9:
			puts("A");
			break;
		case 8:
			puts("B");
			break;
		case 7:
			puts("C");
			break;
		case 6:
			puts("D");
			break;
		case 5:
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:
			puts("E");
			break;
		default:
			puts("Input error!");
			break;
	}
	return 0;
}