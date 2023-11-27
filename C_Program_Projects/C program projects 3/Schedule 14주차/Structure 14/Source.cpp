#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct profile               //구조체 선언
{
	char name[50];             //구조체의 멤버
	int std_num;			   //구조체의 멤버
	int score;				   //구조체의 멤버
	char grade;				   //구조체의 멤버
};

void printstruct(profile P)
{
	printf("이름: %s\n", P.name);
	printf("학범: %d\n", P.std_num);
	printf("점수: %d\n", P.score);

	printf("학점: %c\n", P.grade);

}








struct profile setprofile()
{
	struct profile P;
	printf("이름을 입력하세요: ");
	scanf("%s", &P.name);
	printf("학번을 입력하세요: ");
	scanf("%d", &P.std_num);
	printf("점수를 입력하세요: ");
	scanf("%d", &P.score);
	printf("학점을 입력하세요: ");
	scanf("%c", &P.grade);
	printf("\n");

	return P;
}

int main()
//declare struct and struct variable
/*{
	struct profile P;                    //구조체 변수 선언 (declare structure variable )

	strcpy_s(P.name, "환준은");             //문자열을 복사하는 함수
	P.std_num = 2022218007;
	P.score = 87;
	P.grade = 'B';

	printf("이름: %s\n", P.name);
	printf("학범: %d\n", P.std_num);
	printf("점수: %d\n", P.score);
	printf("학점: %c\n", P.grade);
}*/

//using struct and function
/*{
	struct profile P;
	strcpy_s(P.name, "김지원");
	P.std_num = 2022218070;
	P.score = 77;
	P.grade = 'C';

	printstruct(P);

}*/

//A function that prints a structure
/*{
	struct profile P;
	P = setprofile();
	printstruct(P);
}*/




//실습 2
{
	struct movie info;
	info = movies_information();
	print_information(info[5]);
}