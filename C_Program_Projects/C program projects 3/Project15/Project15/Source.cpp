#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	unsigned int week;
	// Declare constant name of weeks
	const char * weekDays[] = { "������", "ȭ����", "������","�����", "�ݿ���", "�����","�Ͽ���" };
	printf("��¥�� �����ϼ���: ");
	scanf("%d", &week);
	//prevent from go beyond array boundary
	if (week > 0 && week < 8)
	{
		// Print week name using array index
		printf("%s", weekDays[week - 1]);
	}
	else
	{
		printf("�߸� �Է��߽��ϴ� \n\n ������ �ȿ� �Ϲ�ȣ�� �Է��ϼ���: ");
	}
	return 0;
	const char *  weekDays[7];
	int  X = 6;
	switch (X) { //locates the starting day in calender
	case 0:
		X = X;
		int cnt = 1;
		break;
	case 1:
		X += 4;
		cnt = 2;
		break;
	case 2:
		X += 8;
		cnt = 3;
		break;
	case 3:
		X += 12;
		cnt = 4;
		break;
	case 4:
		X += 16;
		cnt = 5;
		break;
	case 5:
		X += 20;
		cnt = 6;
		break;
	case 6:
		X += 24;
		cnt = 7;
		break;
	default:
		printf("INVALID DATA FROM THE getOddNumber()MODULE");
		return 0;
	}
}
