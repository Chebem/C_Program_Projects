#include<stdio.h>
#include<math.h>
int main()
{
printf("이름: 추쿠카 체벰\n학번: 2022218070\n");
int value;  //변수 선언
printf("숫자를 입력하세요: ");
scanf("%d", &value);
//결과 출력
for (int i = 0; i < value; i++) {
	for (int j = 0; j < value; j++)
	{
		if (i == j)
		{
			printf(" ");
		}
		else if (i > j)
		{
			printf("*");
		}
		else
		{
			printf("");
		}
	}printf("\n");
}



