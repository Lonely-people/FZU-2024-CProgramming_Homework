#include <stdio.h>

int main() {
	int h; scanf("%d", &h);
	double ans = (h - 100) * 0.9 * 2;
	printf("%.1lf\n", ans);
	return 0;
}