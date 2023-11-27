#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//구조 선언 
struct date               //일주일 정작할 구조체
{
	int year;
	int month;
	int day;
}; struct date days[7];

void addschedule();    //기능의 식별 및 선언

int main()    //메인 함수
{
	int num;
	int hr, min;

	while (1)
	{
		for (int i = 0; i < 7; i++)
		{
			printf("(%d).%d, %d", i + 1, days[i].month, days[i].day);
		}
		printf("\n날짜를 선택하세요: ");
		scanf("%d", &num);
		do addschedule();  //구조체를 인수로 전달
		while  (num <= 1 || num >= 7);


	}

}



//void display(struct Schedule schedule1);//

struct Schedule
{
	char schedule_title[30];
	int st_hour, st_min;    //일정이 시작하는 시간과 분
	int el_hour, el_min;    //일정에 걸리는 시간과 분
	char content[500];

}; struct Schedule schedule1[168];          // 24hrs X 7days =168hrs in a week


//함수의 정의(define function)
//일정 추가 함수

void addschedule()
{
	struct Schedule schedule1;

	printf("\n\n\t\t*****************");
	printf("\n\t\t *일정 추가 옵션*");
	printf("\n\t\t*****************");


	for (int i = 0; i < 168; i++)               //사용자 입력하는 일정 추가
	{
		printf("\n날짜 일정 제목 입력하세요: ");
		scanf("%s", &schedule1.schedule_title); //일정 제목 출력
		printf("\n시작하는 시간을 입력하세요[hh:mm]: ");
		scanf("%d: %d", &schedule1.st_hour, &schedule1.st_min);  //시작하는 시간을 입력 
		printf("\n걸리는 시간 입력하세요[hh:mm]: ");
		scanf("%d: %d", &schedule1.el_hour, &schedule1.el_min);    //걸리는 시간을 출력
		printf("\n일정 내용 입력하세요: ");
		scanf("%s", &schedule1.content);    //일정 내용 입력

	}
	printf("\n\n");


}


/*//void display(struct Schedule schedule)            // 일정의 정보를 표시
{
	printf("일정 제목은: %s\n", schedule.schedule_title);
	printf("시작하는 시간은: %d:%d\n", schedule.st_hour, schedule.st_min);
	printf("걸리는 시간은: %d:%d\n", schedule.el_hour, schedule.el_min);
	printf("일정의 내용은: %s/n", schedule.content);
}*/