#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int sum(int x) {
	int total = 0;
	for (int i = 1; i <= x; i++) {
		total += i;
		if (i >= x) {
			printf("%d = ", i);
			return total;
		}
		printf("%d + ", i);
	}
	return total;
}

int main(void) {
	int x, y;

	printf("請輸入一個正整數字：");
	scanf("%d", &y);
	x = sum(y);
	printf("%d\n總和：%d\n", x, x);

	system("pause");
	return 0;
}
