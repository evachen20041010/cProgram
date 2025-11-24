#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void sum(int x) {
	int total = 0;
	for (int i = 1; i <= x; i++) {
		total += i;
		if (i >= x) {
			printf("%d = ", i);
			continue;
		}
		printf("%d + ", i);
	}
	printf("%d\n總和：%d\n", total, total);
}

int main(void) {
	int y;

	printf("請輸入一個正整數字：");
	scanf("%d", &y);
	sum(y);

	system("pause");
	return 0;
}
