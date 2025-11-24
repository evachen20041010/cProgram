#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int sum(int x) {
	int total = 0, t;
	int t1, t2, t3;

	t1 = (2 * 1 - 1) * 2;
	t2 = (2 * 2 - 1) * 2;
	for (int i = 1; i <= x; i++) {
		t = (2 * i - 1) * 2;
		total += t;
		if (i == 1) {
			t1 = t;
			printf("%d + ", t1);
		}
		else if (i == 2) {
			t2 = t;
			printf("%d + ", t2);
		}
		else if (i == 3) {
			t3 = t;
			printf("%d +....+ ", t3);
		}
		else if (i == x) {
			printf("(2 * %d - 1) * 2 = ", i);
			printf("%d + %d +...+ %d = ", t1, t2, t);
			return total;
		}
	}
}

int main(void) {
	int x, y;

	printf("請輸入項數（必須是整數）\n");
	scanf("%d", &y);
	x = sum(y);
	printf("%d\n", x);

	system("pause");
	return 0;
}
