#include <stdio.h>

int main() {
	int x; scanf("%d", &x);
	if (x > 100 || x < 0) {
		printf("Data Error\n");
	} else if (x >= 60 && x <= 100) {
		printf("Pass\n");
	} else {
		printf("No Pass\n");
	}
	return 0;
}