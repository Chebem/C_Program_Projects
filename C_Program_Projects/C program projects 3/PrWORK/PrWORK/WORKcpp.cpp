
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void addschedule();
void displayschedule();
void editschedule();


//���� ���� 
struct Schedule
{
	char schedule_title[30];
	int st_hour, st_min;    //������ �����ϴ� �ð��� ��
	int el_hour, el_min;    //������ �ɸ��� �ð��� ��
	char content[500];
};

int main()
{

	int choice;
	while (1)
	{
		printf("\n������ ������ �߰��� �ּ���\t[1]");    //������ ���� �߰� ��� 
		printf("\n������ ������ �ּ���\t\t[2]");             //������ ���� ���
		printf("\n������ ������ �ּ���\t\t[3]");             //������ ���� ���
		printf("\n����\t\t\t\t[4]");
		printf("\n\n �ɼ��� ������ �ּ���: ");

		scanf("%d", &choice);						   //����� ���� �Է�

		//ȣ�� �Լ��� ����
		//������� ���ÿ� ���� 
		switch (choice) {
		case 1:
			addschedule();
		case 2:
			displayschedule();
			break;
		case 3:
			editschedule();
			break;
		case 4:
			//deleteschedule();//
			break;
		default:
			printf("\n�߸��� ���� �Է��߽��ϴ�");
			printf("\n�ٽ� ������ �ּ���: ");
			scanf("%d", &choice);
			break;

		}if (choice == 4)
			break;


	}
}

//�Լ��� ����(define function)
//���� �߰� �Լ�
void addschedule()
{
	printf("\n\n\t\t*****************");
	printf("\n\t\t *���� �߰� �ɼ�*");
	printf("\n\t\t*****************");

	int day = 0;
	do
	{
		printf("\n��¥�� �������ּ���(1-31): ");
		scanf("%d", &day);
		if (day < 1 || day > 31)
			printf("����!!, 1-31���̿� �����ϼ���: ");
	} while (day < 1 || day > 31);

	struct Schedule schedule[4];

	int i;
	for (int i = 0; i < 4; i++)
	{
		printf("\n���� ���� �߰��ϼ���: ");
		scanf("%s", schedule[i].schedule_title);      //���� ���� �Է�

		printf("\n�����ϴ� �ð��� �Է��ϼ���:[hh:mm]:  ");
		scanf("%d:%d", schedule[i].st_hour, schedule[i].st_min);   //�����ϴ� �ð��� �Է� 

		printf("\n�ɸ��� �ð��� �Է��ϼ���: ");
		scanf("%d:%d", schedule[i].el_hour, schedule[i].el_min);   //�ɸ��� �ð��� �Է�

		printf("\n���� ������ �Է��ϼ���: ");
		scanf("%s", schedule[i].content);                       //���� ���� �Է�
	}

	return;
};



//�Լ��� ���� 
//���� ����
void displayschedule()
{
	int day = 0;
	do
	{
		printf("\n��¥�� �������ּ���(1-31): ");
		scanf("%d", &day);
		if (day < 1 || day > 31)
			printf("����!!, 1-31���̿� �����ϼ���: ");
	} while (day < 1 || day > 31);

	struct Schedule schedule[1];

	printf("\n\n\t\t*****************");
	printf("\n\t\t *���� ���� �ɼ�*");
	printf("\n\t\t*****************");

	int j;
	for (j = 0; j < 1; j++)
	{
		printf("���� ����: %s", schedule[j].schedule_title);
		printf("\n�����ϴ� �ð�[hh:mm]: %d:&d", schedule[j].st_hour, schedule[j].st_min);
		printf("\n�ɸ��� �ð�: %d:%d", schedule[j].el_hour, schedule[j].el_min);
		printf("\n���� ����: %s", schedule[j].content);
	}
	return;
};

//�Լ� ����
//���� ����
void editschedule()
{

}

//�Լ��� ����
//���� ����
void deletescheduel()
{

}