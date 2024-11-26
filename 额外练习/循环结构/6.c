#include <stdio.h>

int a[10], b[10];

int main() {
	for (int i = 1; i <= 7; ++i) {
		scanf("%d%d", &a[i], &b[i]);
	}

	int ok = 0;
	for (int i = 1; i <= 7; ++i) {
		if (a[i] + b[i] > 8) {
			ok = 1;
			break;
		}
	}

	if (!ok) {
		puts("0");
	} else {
		int mxd = 0, mx = 0;
		for (int i = 1; i <= 7; ++i) {
			if (a[i] + b[i] > mx) {
				mx = a[i] + b[i];
				mxd = i;
			}
		}
		printf("%d\n", mxd);
	}
	return 0;
}