#include<stdio.h>
#include<math.h>
int main()
{
printf("�̸�: ����ī ü��\n�й�: 2022218070\n");
int value;  //���� ����
printf("���ڸ� �Է��ϼ���: ");
scanf("%d", &value);
//��� ���
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



