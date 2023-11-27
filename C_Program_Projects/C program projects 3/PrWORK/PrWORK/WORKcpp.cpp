
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void addschedule();
void displayschedule();
void editschedule();


//구조 선언 
struct Schedule
{
	char schedule_title[30];
	int st_hour, st_min;    //일정이 시작하는 시간과 분
	int el_hour, el_min;    //일정에 걸리는 시간과 분
	char content[500];
};

int main()
{

	int choice;
	while (1)
	{
		printf("\n일정의 내용을 추가해 주세요\t[1]");    //일정의 내용 추가 출력 
		printf("\n일정을 편집해 주세요\t\t[2]");             //일정의 편집 출력
		printf("\n일정을 삭제해 주세요\t\t[3]");             //일정의 삭재 출력
		printf("\n종료\t\t\t\t[4]");
		printf("\n\n 옵션을 선택해 주세요: ");

		scanf("%d", &choice);						   //사용자 선택 입력

		//호출 함수가 정의
		//사용자의 선택에 따라 
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
			printf("\n잘못된 선택 입력했습니다");
			printf("\n다시 선택해 주세요: ");
			scanf("%d", &choice);
			break;

		}if (choice == 4)
			break;


	}
}

//함수의 정의(define function)
//일정 추가 함수
void addschedule()
{
	printf("\n\n\t\t*****************");
	printf("\n\t\t *일정 추가 옵션*");
	printf("\n\t\t*****************");

	int day = 0;
	do
	{
		printf("\n날짜를 선택해주세요(1-31): ");
		scanf("%d", &day);
		if (day < 1 || day > 31)
			printf("오류!!, 1-31사이에 선택하세요: ");
	} while (day < 1 || day > 31);

	struct Schedule schedule[4];

	int i;
	for (int i = 0; i < 4; i++)
	{
		printf("\n일정 제목 추가하세요: ");
		scanf("%s", schedule[i].schedule_title);      //일정 제목 입력

		printf("\n시작하는 시간을 입력하세요:[hh:mm]:  ");
		scanf("%d:%d", schedule[i].st_hour, schedule[i].st_min);   //시작하는 시간을 입력 

		printf("\n걸리는 시간을 입력하세요: ");
		scanf("%d:%d", schedule[i].el_hour, schedule[i].el_min);   //걸리는 시간을 입력

		printf("\n일정 내용을 입력하세요: ");
		scanf("%s", schedule[i].content);                       //일정 내용 입력
	}

	return;
};



//함수의 정의 
//일정 보기
void displayschedule()
{
	int day = 0;
	do
	{
		printf("\n날짜를 선택해주세요(1-31): ");
		scanf("%d", &day);
		if (day < 1 || day > 31)
			printf("오류!!, 1-31사이에 선택하세요: ");
	} while (day < 1 || day > 31);

	struct Schedule schedule[1];

	printf("\n\n\t\t*****************");
	printf("\n\t\t *일정 보기 옵션*");
	printf("\n\t\t*****************");

	int j;
	for (j = 0; j < 1; j++)
	{
		printf("일정 제목: %s", schedule[j].schedule_title);
		printf("\n시작하는 시간[hh:mm]: %d:&d", schedule[j].st_hour, schedule[j].st_min);
		printf("\n걸리는 시간: %d:%d", schedule[j].el_hour, schedule[j].el_min);
		printf("\n일정 내용: %s", schedule[j].content);
	}
	return;
};

//함수 정의
//일정 편집
void editschedule()
{

}

//함수의 정의
//일정 삭제
void deletescheduel()
{

}