#include <stdio.h>
#include <stdlib.h>
void Abc(int[]);
void Abc(int A[]) {
	A[0] = -1;
	A[1] = 1;
	printf("In the functionn Abc -- A[0]=%d\n", A[0]);
	printf("In the functionn Abc -- A[1]=%d\n", A[1]);
}

int main(void)
{
	int B[2] = { 3,5 };
	printf("Example : Call by pointer (傳值,主程式中與函數中的參數共用同一個位址\n");
	printf("Before call Abc function, in the main --- B[0]=%d\n", B[0]);
	printf("Before call Abc function, in the main --- B[1]=%d\n", B[1]);
	Abc(B);
	printf("After call Abc function, in the main --- B[0]=%d\n", B[0]);
	printf("After call Abc function, in the main --- B[1]=%d\n", B[1]);
	system("pause"); return(0);
}