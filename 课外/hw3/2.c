#include <stdio.h>
#include <math.h>

int main() {
	double x, y; scanf("%lf%lf", &x, &y);
	if ((x <= 0 && y >= 0) || (y >= x && y <= 0)) {
		puts("\\^O^/");
	} else if (x > y && y <= 0) {
		puts("1");
	} else {
		printf("%d\n", (int)ceil(y / x));
	}
	return 0;
}