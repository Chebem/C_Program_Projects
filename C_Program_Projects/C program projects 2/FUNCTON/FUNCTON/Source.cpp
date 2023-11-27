/*#include<stdio.h>
#include<math.h>
#include<stdlib.h>

 char girl(char name[]){
	
	 printf("Hello %s",name);
	 return 0;
}

int  birthday(){
	printf("\nHappy birthday to you!");
	printf("\nHappy birthday to you!");
	printf("\nHappy birthday to dear... YOU!");
	printf("\nHappy birthday to you!\n");
	return 0;
}

int main()
{
	char name[] = "chebem";

	girl(name);
	birthday();
	birthday();
	birthday();
	birthday();
}*/


/*int calculation(int X, int Y)

{	int T1, T2, R;

	T1 = pow(X, Y) + (X - Y);
	T2 = pow(Y, X) + (Y - X);
	R = (T1 > T2) ? T1 : T2;
	printf("%d\n", R);
	return  R;
}

int main()
{
	int R;
	R = calculation(3, 5);
	R = calculation(2, 7);
	R = calculation(6, 1);
	R = calculation(1, 5);
	R = calculation(5, 2);
}*/


/*int calculation(int X, int Y); //함수 선언
int main()
{
	int R;   //변수 선언 
	R = calculation(3, 5);
	R = calculation(2, 7);
	R = calculation(6, 1);
	R = calculation(1, 5);
	R = calculation(5, 2);
}

int calculation(int X, int Y)
{
	int T1, T2, R;

	T1 = pow(X, Y) + (X - Y);
	T2 = pow(Y, X) + (Y - X);
	R = (T1 > T2) ? T1 : T2;
	printf("%d\n", R);
	return  R;
}*/

/*double cube(double num)
{
	double result;
	result = num * num * num;
	printf("Answer: %f", result);
	return result;
}
int main()
{
	double result;
	result  = cube( 3.0);
}*/

//
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>


//EXAMPLE 1
 /*double compound_interest (int X, double r, int n)
{
 double Sn;
 Sn = X * (pow(r + 1, n)- 1)/ r;
 printf("연 이율은 %.0lf%%로 매년 %d원씩 %d년간 입금하엿을때 원리 합계는 %.0lf원이다. \n", 100 * r, X, n, Sn);
 return Sn;
}
int main()
{
	double R;
	R = compound_interest(10000, 0.04, 10);
	R = compound_interest(50000, 0.03, 20);
	R = compound_interest(10000000, 0.04, 30);

 }*/

 //EXAMPLE 2
 /*int factorial(int N)
 {
	 int Result = 1;
	 for (int i = N; i > 0; i--) {
		 Result *= i;
	 }
	 printf("%d! 은 %d\n", N, Result);

	 return Result;
 }
 int main(void)
 {
	 int Result;
	 Result = factorial(5);
	 Result = factorial(8);
	 Result = factorial(2);
	 Result = factorial(3);
 }*/


 //EXAMPLE 2 (CHANGE)

 int factorial(int N)
 {

	 if (N == 1)
	 {
		 return 1;
	 }
	 else  
		 return (N * factorial(N - 1));
	 }

 int main(void)
/* {
	 int X;
	 X = 12;
	 printf("%d!은 %d\n", X, factorial(X));
	 X = 5;
	 printf("%d!은 %d\n", X, factorial(X));
	 X = 3;
	 printf("%d!은 %d\n", X, factorial(X));
	 X = 11;
	 printf("%d!은 %d\n", X, factorial(X));
 }*/
/*int factorial(int N)
{

	if (N == 1)
	{
		return (N + factorial(N - 1));
	}
	else
	{
		return (N * factorial(N - 1));
	}
}
	t main(void)
{
	int X;
	printf("정수를 입력하세요: ", X);
	scanf("%d", &X);
}*/
	
 /*void binary(int num);
 int main(void)
 {
	 binary(13);
 }
 void binary(int num)
 {
	 if (num > 0)
	 {
		 binary(num / 2);
		 printf("%d", num % 2);
	 }
 }*/
/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void display_menu();
int get_number();

selected_num(int num);
int set_password();
match_pw(int pw);

int main(void)
{
	int num;
	int pw = 1234;
	display_manu();
	while (1) 
	{
		num = get_number();
		if (num == 3) {
			printf("종료합니다.\n");
			break;
		}
		else
			pw = selected_num(num, pw);
	}
}
void display_menu()
{
	printf("1. 비밀번호 설정\n2. 잠금 해제\n3. 종료\n");
}
int get_number()
{
	int num;
	printf("번호를 입력하세요: ");
	scanf("%d", &num);
	if ((num > 3) || (num < 1))
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
		printf("메인 메뉴로 돌아갑니다.\n");
		break;
	case 2:
		match_pw(pw);
		printf("메인 메뉴로 돌아갑니다.\n");
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
	printf("비밀번호가 설정되었습니다.\n");
	return pw;
}
	match_pw(int pw)
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
}*/

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 //함수 성언 
	void display_menu();
	int set_number();

	void main(void)
	{
		int number;
		int password = 1234;
		display_menu();
		while (1)
		{
			number = set_number();
			if (number == 3)
			{
				break;
			}
			else
			{
				password = set_number(number, password);
			}
		}
		printf("프로그램을 종료합니다.\n");
	}
	 
	void display_menu()
	{
		printf("1. 비밀번호 설정\n2. 비밀번호 입력\n3. 종료\n");
	}
	int set_number()
	{
		int num;
		printf("번호를 입력하세요 :");
		scanf("%d", &num);
		if ((num > 3) || (num < 1))
		{
			printf("잘못된 번호를 입력하였습니다.\n");
			set_number();
		}
		else
			return num;
	}
	
	set_number(int num, int pw)
	{

		switch (num)
		{
		case 1:
			pw = set_password(pw);
			break;
		case 2:
			match_password(pw);
			break;
		case 3:
			break;
		}
		printf("메인 메뉴로 돌아갑니다.\n");
		return pw;
	}
	int set_password(int pw)
	{
		printf("새로운 비밀번호를 입력하세요: ");
		scanf("%d", &pw);
		return pw;
	}
	match_password(int pw)
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
			printf("잘못된 비밀번호를 입력하였습니다.\n");
			match_password(pw);
		}
	}*/