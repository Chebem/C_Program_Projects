#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>

typedef enum { false, true } bool;
struct Date //�Է��� 7���� ��ü�� �������־� ���� ��,��,���� �Է��Ѵ�. 
{
	int year;
	int month;
	int day;
} days[7];//���� �Լ����� ������ ��ġ�̱� ������ ���������� ��� ����
struct Schedule //���� ������ ������ ��ü
{
	char name[50];          //���� ����
	char content[100];      //���� ����
	int st_hour, st_min;    //������ �����ϴ� �ð��� ��
	int el_hour, el_min;    //������ �ɸ��� �ð��� ��
	bool use;               //��������� Ȯ���ϴµ� ���
} schedule[168];    //24�ð�x7�� = 168 ������ �߿� �� �ð��뺰�� ������ �ϳ��� ���� �� �ִ�.

void hr() { printf("������������������������������������������������������������������������������������������\n"); }
void input_date();          //��¥�� �Է��Ͽ� �ʱ� �����ϴ� �Լ�
void print_schedule();      //������ ���� ��ü�� ����ϴ� �Լ�
void menu_system();         //�޴��� ����ϰ� ��ȣ�� ������ �ٸ� �Լ��� �����Ű�� �Լ�
void input_schedule();      //������ �Է��ϴ� �Լ�
int count_number(int num);  //������ �ڸ����� ���� �Լ�

int main()
{
	system("mode con cols=110 lines=44");
	bool sw = true;
	int num;
	printf("One-week ���̾\n");
	input_date();
	while (sw)
	{
		print_schedule();
		menu_system();
	}
}
void input_date()   //��¥�� �Է��Ͽ� �ʱ� �����ϴ� �Լ�
{
	int day_Limit = 0;
	do {    //1000 ~ 5000������ �⵵�� �Է��Ѵ�. ���ڰ� ������ �Ѿ�� �ݺ��Ѵ�.
		printf("�⵵�� �Է����ּ��� : ");
		scanf("%d", &days[0].year);
		if (days[0].year < 5000 && days[0].year > 1000) break;
		else printf("�ùٸ� ���ڸ� �Է����ּ���.\n");
	} while (1);
	for (int i = 1; i < 7; i++) days[i].year = days[0].year;    //��� ��¥�� �Է��� �⵵�� �Է�.
	do {    //1 ~ 12������ ���� �Է��Ѵ�. ���ڰ� ������ �Ѿ�� �ݺ��Ѵ�.
		printf("���ۿ��� �Է����ּ��� : ");
		scanf("%d", &days[0].month);
		if (days[0].month >= 1 && days[0].month <= 12) break;
		else printf("�ùٸ� ���ڸ� �Է����ּ���.\n");
	} while (1);
	for (int i = 1; i < 7; i++) days[i].month = days[0].month;    //��� ��¥�� �Է��� ���� �Է�.
	//�޿� ���� ������ �� ���� ����Ѵ�.
	if (days[0].month == 1 || days[0].month == 3 || days[0].month == 5 || days[0].month == 7 || days[0].month == 8 || days[0].month == 10 || days[0].month == 12)
		day_Limit = 31; //1,3,5,7,8,10,12���� 31�ϱ��� �ִ�.
	else if (days[0].month == 4 || days[0].month == 6 || days[0].month == 9 || days[0].month == 11)
		day_Limit = 30; //4,6,9,11���� 30�ϱ��� �ִ�.
	else if (days[0].month == 2) //2���� Ư���ؼ� ���� ����Ѵ�.
	{   //2���� 4�⿡ �ѹ���, 100���� ������ �������� 400���� ������ �������� �ʴ� �ؿ��� 29�ϱ��� �ִ�.
		if (days[0].year % 4 == 0 && days[0].year % 100 == 0 && days[0].year % 400 != 0)
			day_Limit = 29;
		else day_Limit = 28;    //�� �ܿ��� 28�ϱ��� �ִ�.
	}
	do {    //�������� �Է��ϸ� ������ 6�Ͽ� ���ӵ� ��¥�� �ڵ����� �Էµȴ�.
		printf("�������� �Է����ּ��� : ");
		scanf("%d", &days[0].day);
		if (days[0].day >= 1 && days[0].day <= day_Limit)
		{
			for (int i = 1; i < 7; i++)     // 1���� 6����, �� 6ȸ �ݺ��ؼ� �Է��Ѵ�.
			{
				if (days[i - 1].day == day_Limit)   //���� ��¥�� �̹����� ������ ���̶�� 1���� �Է��Ѵ�.
				{
					days[i].day = 1;
					if (days[i - 1].month == 12)    //12���̶�� ������ ��� ��¥�� ���� 1��, �⵵�� +1 ���ش�.
					{
						for (int j = i; j < 7; j++)
						{
							days[j].month = 1;
							days[j].year++;
						}
					}
					else for (int j = 0; j < 7 - i; j++) days[i + j].month++;   //12���� �ƴ϶�� ������ ��� ��¥�� ���� +1 ���ش�.

				}
				else days[i].day = days[i - 1].day + 1; //���� ������ ���� �ƴ϶�� ���� ��¥+1���� �Է��Ѵ�.
			}
			break;
		}
		else printf("�ùٸ� ���ڸ� �Է����ּ���.\n");
	} while (1);
}
void print_schedule()
{
	hr();
	//������ ��ü ǥ�� ����ϴ� �Լ�
	printf("������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������\n��"); //ù°�� ���̾ƿ�
	for (int i = 0; i < 40; i++) printf(" ");//��°�� ���� ���
	printf("%d.%d.%d~%d.%d.%d", days[0].year, days[0].month, days[0].day, days[6].year, days[6].month, days[6].day);//��° �� ���� ���
	for (int i = 0 + count_number(days[0].year) + count_number(days[0].month) + count_number(days[0].day) + count_number(days[6].year) + count_number(days[6].month) + count_number(days[6].day); i < 55; i++) printf(" ");/*��¥ �ڸ����� ������ ��ŭ ���� ���*/printf("��\n");
	printf("������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������\n");//��°�� ���̾ƿ�
	printf("����  �ð�  ��");//��°��
	for (int i = 0; i < 7; i++) //�������� ���� ���
	{
		for (int j = 0; j < 4; j++) printf(" ");    //���� 4�� ���
		printf("%d.%d", days[i].month, days[i].day);    //��¥ ���
		for (int j = 0 + count_number(days[i].month) + count_number(days[i].day); j < 7; j++) printf(" ");  //��¥ �ڸ����� ������ ��ŭ ���� ���
		printf("��");    //���̾ƿ�
	}
	printf("\n");
	printf("������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������\n");//��°�� ���̾ƿ�
	for (int time = 1; time < 25; time++)
	{
		printf("����  "); for (int i = 0 + count_number(time); i < 2; i++) printf("0");
		printf("%d:00 ��", time); //�ð��� ���
		for (int i = 0; i < 7; i++) //�������� ���� ���
		{
			printf(" ");
			for (int count = 0, j = 0; j < 12; j++) //�ѱ��� �� ���ڿ� 2�ڸ��� �����ϰ� 4��Ʈ�� �����Ѵ�. ���� ���ڿ��� 3x(8/2) = 12 ȸ ����ϸ� ���� �Ǵ� ������ 2ȸ ��µǾ��ٸ� Ƚ���� 1ȸ �����Ѵ�.
			{
				if ((schedule[(i * 24) + time].name[j] & 0x80) != 1)
				{
					//���� ������ �ѱ��� �ƴ϶�� 2ȸ ����� ������ ��� Ƚ���� 1ȸ �����Ѵ�.
					if (count == 1)
					{
						j++;
						count = 0;
					}
					else count++;
					if (schedule[(i * 24) + time].name[j] == '\0') printf(" "); //�ش� ���ڰ� null(\0)���ڶ�� ������ ����Ѵ�.
					else printf("%c", schedule[(i * 24) + time].name[j]);
				}
				else if (j == 10 && count == 1) //������ 1�ڸ��� ������ �� �ѱ��� 4ȸ° ��µǷ� �Ѵٸ� ������ ����Ѵ�.
				{
					j += 2;
					count = 0;
					printf(" ");
				}
				else printf("%c", schedule[(i * 24) + time].name[j]);   //�ѱ��̶�� �״�� 3ȸ ����Ѵ�.
			}
			if (strlen(schedule[(i * 24) + time].name) > 8) printf("...��"); //���� ������ 8���ڸ� �Ѿ�� ������ǥ ���.
			else printf("   ��");                 //�ƴ϶�� ���� ���
		}
		printf("\n");
	}
	printf("������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������\n");
}
void menu_system()  //�޴��� ����ϰ� ��ȣ�� ������ �ٸ� �Լ��� �����Ű�� �Լ�
{
	int num;
	printf("    ����������������������������������������������\n");
	printf("    �� 1. ���� ���        ��\n");
	printf("    �� 2. �ִ��� ���� ǥ�� ��\n");
	printf("    �� 3. ������         ��\n");
	printf("    �� 4. ����             ��\n");
	printf("    ����������������������������������������������");
	printf("     �����Ͻʽÿ�:");
	scanf("%d", &num);
	if (num == 1)
	{
		printf("������� �ڵ� \n");
		input_schedule();
	}
	else if (num == 2)
	{
		printf("[�� ���� ����] \n");
		print_schedule();
	}
	else if (num == 3)
	{
		printf("�������ڵ� \n");
	}
	else if (num == 4)
	{
		printf("����Ǿ����ϴ�.\n");
		/*exit(0); */
	}
}
void input_schedule()   //������ �Է��ϴ� �Լ�
{
	int day;//-------------------------------------------------------------------------------   ��  ��           ��  ��   -------------------------------------------------------------------------------------------

}
int count_number(int num)   //������ �ڸ����� ���� �Լ�
{
	int count = 0;
	while (num != 0)
	{
		num = num / 10;
		count++;
	}
	return count;
}