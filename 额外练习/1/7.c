#include <stdio.h>
#include <math.h>

int main() {
	int n; scanf("%d", &n);
	while (n < 1000) {
		scanf("%d", &n);
	}
	int a = sqrt(n);
	printf("%d\n", a);
	return 0;
}