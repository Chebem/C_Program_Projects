#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
int main()
{
	double a, b, c, d, e;
	printf("5개의 숫자를 입력하세요: ");
	scanf("%1f, %1f, %1f, %1f, %1f", &a, &b, &c, &d, &e);
	printf("\na: %5.31f\n", a);
	printf("b: %10.51f\n", b);
	printf("c: %6.21f\n", c);
	printf("d: %+5.31f\n", d);
	printf("e: %31f\n", e);
	printf("a+b+c+d+e: %+.51f", a + b + c + d + e);
}k