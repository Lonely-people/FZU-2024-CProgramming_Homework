#include <stdio.h>
#include <math.h>

int main() {
	int op, avg, score, ok, cnt; scanf("%d%d%d%d%d", &op, &avg, &score, &ok, &cnt);
	int ans = 0;
	if (avg > 80 && cnt >= 1) {
		ans += 8000;
	}
	if (avg > 85 && score > 80) {
		ans += 4000;
	}
	if (avg > 90) {
		ans += 2000;
	}
	if (score > 80 && ok == 1) {
		ans += 850;
	}
	printf("%d\n", ans);
	return 0;
}