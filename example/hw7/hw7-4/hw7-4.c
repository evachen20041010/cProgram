#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int iPower(int x, int n);

int iPower(int x, int n) {
	int  count = 0;
	while (x % n == 0) {
		x = x / n;
		count++;
	}
	return (x == 1) ? count : 0;
}

int main(void) {
	int x;
	printf("請輸入X\n");
	scanf("%d", &x);
	int n;
	printf("請輸入N\n");
	scanf("%d", &n);
	if (iPower(x, n) == 0) {
		printf("%d 不是 %d 的次方", x, n);
	}
	else {
		printf("%d = %d 的  %d次方", x, n, iPower(x, n));

	}
}