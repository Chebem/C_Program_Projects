#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//���� ���� 
struct date               //������ ������ ����ü
{
	int year;
	int month;
	int day;
}; struct date days[7];

void addschedule();    //����� �ĺ� �� ����

int main()    //���� �Լ�
{
	int num;
	int hr, min;

	while (1)
	{
		for (int i = 0; i < 7; i++)
		{
			printf("(%d).%d, %d", i + 1, days[i].month, days[i].day);
		}
		printf("\n��¥�� �����ϼ���: ");
		scanf("%d", &num);
		do addschedule();  //����ü�� �μ��� ����
		while  (num <= 1 || num >= 7);


	}

}



//void display(struct Schedule schedule1);//

struct Schedule
{
	char schedule_title[30];
	int st_hour, st_min;    //������ �����ϴ� �ð��� ��
	int el_hour, el_min;    //������ �ɸ��� �ð��� ��
	char content[500];

}; struct Schedule schedule1[168];          // 24hrs X 7days =168hrs in a week


//�Լ��� ����(define function)
//���� �߰� �Լ�

void addschedule()
{
	struct Schedule schedule1;

	printf("\n\n\t\t*****************");
	printf("\n\t\t *���� �߰� �ɼ�*");
	printf("\n\t\t*****************");


	for (int i = 0; i < 168; i++)               //����� �Է��ϴ� ���� �߰�
	{
		printf("\n��¥ ���� ���� �Է��ϼ���: ");
		scanf("%s", &schedule1.schedule_title); //���� ���� ���
		printf("\n�����ϴ� �ð��� �Է��ϼ���[hh:mm]: ");
		scanf("%d: %d", &schedule1.st_hour, &schedule1.st_min);  //�����ϴ� �ð��� �Է� 
		printf("\n�ɸ��� �ð� �Է��ϼ���[hh:mm]: ");
		scanf("%d: %d", &schedule1.el_hour, &schedule1.el_min);    //�ɸ��� �ð��� ���
		printf("\n���� ���� �Է��ϼ���: ");
		scanf("%s", &schedule1.content);    //���� ���� �Է�

	}
	printf("\n\n");


}


/*//void display(struct Schedule schedule)            // ������ ������ ǥ��
{
	printf("���� ������: %s\n", schedule.schedule_title);
	printf("�����ϴ� �ð���: %d:%d\n", schedule.st_hour, schedule.st_min);
	printf("�ɸ��� �ð���: %d:%d\n", schedule.el_hour, schedule.el_min);
	printf("������ ������: %s/n", schedule.content);
}*/