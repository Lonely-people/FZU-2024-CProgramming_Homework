#include <stdio.h>

int main() {
	int a, b; scanf("%d%d", &a, &b);
	int sum = 0, cnt = 0;
	for (int i = a; i <= b; ++i) {
		printf("%5d", i);
		sum += i;
		++cnt;
		if (cnt % 5 == 0 || i == b) {
			puts("");
		}
	}
	printf("Sum = %d\n", sum);
	return 0;
}