

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
			printf("종료합니다.\n");
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
	printf("\t\t1.) 비밀본호 설정\n\t\t2.) 잠금 해제\n\t\t 3.) 종료\n");
}

int get_number()
{
	int num;
	printf("번호를 입력하세요: ");
	scanf("%d", &num);
	if (num > 3 || num < 1)
	{
		printf("잘못된 번호를 입력하였습니다.\n");
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
		printf("메인 메뉴로 들어갑니다\n");
		break;
	case 2:
		match_pw(pw);
		printf("메인 메뉴로 들어갑니다\n");
		break;
	case 3:
		break;
	}
	return pw;
}

int set_password()
{
	int pw = 1234;
	printf("비밀번호를 입력하세요: ");
	scanf("%d", &pw);
	printf("비밀번호를 설정되었습니다.\n");
	return pw;
}

int match_pw(int pw)
{
	int input_pw;
	printf("비밀번호를 입력하세요: ");
	scanf("%d", &input_pw);
	if (pw == input_pw)
	{
		printf("올바른 비밀번호를 입력하였습니다.\n");
	}
	else
	{
		printf("잘못된 비밀번호를 입력하였습니다. 다시 입력하세요.\n");
		match_pw(pw);
	}
}