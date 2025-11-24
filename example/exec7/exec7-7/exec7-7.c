#include <stdio.h>
#include <stdlib.h>
int iAbs(int);
float fAbs(float);
double dAbs(double);

int main(void) {
	int y = -3;
	float f = -3.0f;
	double d = 3.0;

	printf("-3 絕對值為 %d\n", iAbs(y));
	printf("-3 絕對值為 %15.10f\n", fAbs(f/7));
	printf("-3 絕對值為 %15.10f\n", dAbs(d/7));

	system("pause");
	return 0;
}

int iAbs(int x) {
	return (x < 0 ? -x : x);
}

float fAbs(float x) {
	return (x < 0 ? -x : x);
}

double dAbs(int x) {
	return (x < 0 ? -x : x);
}
