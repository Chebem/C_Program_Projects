

#define _CRT_SECURE_N0_WARNING
#include<stdio.h>
void display_menu();
int get_number();

int selected_num(int num, int pw);
int set_password();
int match_pw(int pw);



int main()
{
	int num;
	int pw = 1234;
	display_menu();
	while (1)
	{
		num = get_number();
		if (num == 3)
		{
			printf("�����մϴ�.\n");
			break;
		}
		else
		{
			pw = selected_num(num, pw);
		}
	}
}

void display_menu()
{
	printf("\t\t1.) ��к�ȣ ����\n\t\t2.) ��� ����\n\t\t 3.) ����\n");
}

int get_number()
{
	int num;
	printf("��ȣ�� �Է��ϼ���: ");
	scanf("%d", &num);
	if (num > 3 || num < 1)
	{
		printf("�߸��� ��ȣ�� �Է��Ͽ����ϴ�.\n");
		get_number();
	}
	else
	{
		return num;
	}
}

int selected_num(int num, int pw)
{
	switch (num)
	{
	case 1:
		pw = set_password();
		printf("���� �޴��� ���ϴ�\n");
		break;
	case 2:
		match_pw(pw);
		printf("���� �޴��� ���ϴ�\n");
		break;
	case 3:
		break;
	}
	return pw;
}

int set_password()
{
	int pw = 1234;
	printf("��й�ȣ�� �Է��ϼ���: ");
	scanf("%d", &pw);
	printf("��й�ȣ�� �����Ǿ����ϴ�.\n");
	return pw;
}

int match_pw(int pw)
{
	int input_pw;
	printf("��й�ȣ�� �Է��ϼ���: ");
	scanf("%d", &input_pw);
	if (pw == input_pw)
	{
		printf("�ùٸ� ��й�ȣ�� �Է��Ͽ����ϴ�.\n");
	}
	else
	{
		printf("�߸��� ��й�ȣ�� �Է��Ͽ����ϴ�. �ٽ� �Է��ϼ���.\n");
		match_pw(pw);
	}
}