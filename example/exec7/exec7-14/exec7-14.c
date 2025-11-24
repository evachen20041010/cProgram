#include <stdio.h>
#include <stdlib.h>
void Abc(int[]);
void Abc(int n) {
	n = n = 1;
	printf("In the functionn Abc -- n=%d\n", n);
}

int main(void)
{
	int i = 10;
	printf("Example : Call by pointer (傳值,主程式中與函數中的參數共用同一個位址\n");
	printf("Before call Abc function, in the main --- i=%d\n", i);
	Abc(i);
	printf("After call Abc function, in the main --- i=%d\n", i);
	system("pause"); return(0);
}