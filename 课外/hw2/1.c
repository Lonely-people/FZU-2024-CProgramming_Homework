#include <stdio.h>

int main() {
	int n; scanf("%d", &n);
	int m = n % 5;
	if (m == 0 || m == 4) {
		printf("Drying in day %d\n", n);
	} else {
		printf("Fishing in day %d\n", n);
	}
	return 0;
}