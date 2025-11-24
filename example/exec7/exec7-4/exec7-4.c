#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int sum(int);

int main(void) {
	int y;
	// int total;

	printf("請輸入一個正整數字：");
	scanf("%d", &y);
	// total = sum(y);
	// printf("%d\n總和：%d\n", total, total);
	printf("總和：%d\n", sum(y));

	system("pause");
	return 0;
}

int sum(int x) {
	int total = 0;
	for (int i = 1; i <= x; i++) {
		total += i;
		if (i >= x) {
			printf("%d = %d\n", i, total);
			return total;
		}
		printf("%d + ", i);
	}
	return total;
}

