#include <stdio.h>

int f[50];

int main() {
	int n; scanf("%d", &n);
	f[1] = 1, f[2] = 1;
	for (int i = 3; i <= n; ++i) {
		f[i] = f[i - 1] + f[i - 2];
	} 
	printf("%d\n", f[n]);
	return 0;
}