#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	//4주차 실습과제

	//실습1
	printf("이름: 추쿠카 치네체벰\n 학번: 202218070\n");
	
	double a, b, c, d, e; //변수 선언
	printf("5개의 숫자를 입력하세요: ");
	scanf("%lf, %lf, %lf, %lf, %lf", &a, &b, &c, &d, &e);

	//결과 출력 
	printf("a : |%5.3lf|\n", a);
	printf("b : |%-10.5lf|\n", b);
	printf("c : |%6.2lf|\n", c);
	printf("d : |%+5.3lf|\n", +d);
	printf("e : |%3lf|\n", e);
	printf("a + b + c + d - e: |%+.5lf|\n", a + b + c + d - e);
}