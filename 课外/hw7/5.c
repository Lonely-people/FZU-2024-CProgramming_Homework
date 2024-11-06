#include <stdio.h>

const double pi = 3.14;
const double p = 1.33;
double a[1010];
int id[1010];

int main() {
	int n; scanf("%d", &n);
	for (int i = 1; i <= n; ++i) {
		double r; scanf("%lf", &r);
		a[i] = p * pi * r * r * r;
		id[i] = i;
	}
	for (int i = 1; i <= n; ++i) {
		for (int j = 2; j <= n; ++j) {
			if (a[j] > a[j - 1] || (a[j] == a[j - 1] && id[j] < id[j - 1])) {
				double t = a[j];
				a[j] = a[j - 1];
				a[j - 1] = t;
				t = id[j];
				id[j] = id[j - 1];
				id[j - 1] = t;
			}
		}
	}
	for (int i = 1; i <= n; ++i) {
		printf("%.2lf %d\n", a[i], id[i]);
	}
	return 0;
}