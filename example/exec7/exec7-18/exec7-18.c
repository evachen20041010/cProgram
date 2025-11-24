
#include <stdio.h>


int main(void)
{
    int iNumber[2][4] = { {2, 48, 94, 23}, {56, 37, 71, 63} };

    for (int r = 0; r < 2; r++) {
        for (int c = 0; c < 4; c++) {
            printf("%d", iNumber[r][c]);
            if (!(r == 1 && c == 3)) {
                printf(" + ");
            }
        }
    }

    int total = Sum(iNumber, 2, 4);
    printf(" = %d\n", total);

    return 0;
}

int Sum(int a[][4], int rows, int cols)
{
    int sum = 0;
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            sum += a[r][c];
        }
    }
    return sum;
}
