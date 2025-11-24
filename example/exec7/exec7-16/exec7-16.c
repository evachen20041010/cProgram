#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int iNumber[8] = { 2,48,94,23,56,37,71,63 };

    for (int r = 0; r < 8; r++) {
        printf("%d", iNumber[r]);
        if (!(r == 7)) {
            printf(" + ");
        }
    }

    int total = Sum(iNumber, 8);
    printf(" = %d\n", total);

    return 0;
}

int Sum(int a[8], int rows)
{
    int sum = 0;
    for (int r = 0; r < rows; r++) {
        sum += a[r];
    }
    return sum;
}
