#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	//4���� �ǽ�����

	//�ǽ�1
	printf("�̸�: ����ī ġ��ü��\n �й�: 202218070\n");
	
	double a, b, c, d, e; //���� ����
	printf("5���� ���ڸ� �Է��ϼ���: ");
	scanf("%lf, %lf, %lf, %lf, %lf", &a, &b, &c, &d, &e);

	//��� ��� 
	printf("a : |%5.3lf|\n", a);
	printf("b : |%-10.5lf|\n", b);
	printf("c : |%6.2lf|\n", c);
	printf("d : |%+5.3lf|\n", +d);
	printf("e : |%3lf|\n", e);
	printf("a + b + c + d - e: |%+.5lf|\n", a + b + c + d - e);
}