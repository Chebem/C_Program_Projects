#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>

typedef enum { false, true } bool;
struct Date //입력할 7일을 객체로 지정해주어 각각 년,월,일을 입력한다. 
{
	int year;
	int month;
	int day;
} days[7];//여러 함수에서 공유할 수치이기 때문에 전역변수로 즉시 생성
struct Schedule //일정 내용을 저장할 객체
{
	char name[50];          //일정 제목
	char content[100];      //일정 내용
	int st_hour, st_min;    //일정이 시작하는 시간과 분
	int el_hour, el_min;    //일정에 걸리는 시간과 분
	bool use;               //사용중인지 확인하는데 사용
} schedule[168];    //24시간x7일 = 168 일주일 중에 각 시간대별로 일정을 하나씩 만들 수 있다.

void hr() { printf("─────────────────────────────────────────────\n"); }
void input_date();          //날짜를 입력하여 초기 설정하는 함수
void print_schedule();      //일주일 일정 전체를 출력하는 함수
void menu_system();         //메뉴를 출력하고 번호를 선택해 다른 함수를 실행시키는 함수
void input_schedule();      //일정을 입력하는 함수
int count_number(int num);  //정수의 자릿수를 세는 함수

int main()
{
	system("mode con cols=110 lines=44");
	bool sw = true;
	int num;
	printf("One-week 다이어리\n");
	input_date();
	while (sw)
	{
		print_schedule();
		menu_system();
	}
}
void input_date()   //날짜를 입력하여 초기 설정하는 함수
{
	int day_Limit = 0;
	do {    //1000 ~ 5000까지의 년도를 입력한다. 숫자가 범위를 넘어가면 반복한다.
		printf("년도를 입력해주세요 : ");
		scanf("%d", &days[0].year);
		if (days[0].year < 5000 && days[0].year > 1000) break;
		else printf("올바른 숫자를 입력해주세요.\n");
	} while (1);
	for (int i = 1; i < 7; i++) days[i].year = days[0].year;    //모든 날짜에 입력한 년도를 입력.
	do {    //1 ~ 12까지의 달을 입력한다. 숫자가 범위를 넘어가면 반복한다.
		printf("시작월을 입력해주세요 : ");
		scanf("%d", &days[0].month);
		if (days[0].month >= 1 && days[0].month <= 12) break;
		else printf("올바른 숫자를 입력해주세요.\n");
	} while (1);
	for (int i = 1; i < 7; i++) days[i].month = days[0].month;    //모든 날짜에 입력한 달을 입력.
	//달에 따른 마지막 일 수를 계산한다.
	if (days[0].month == 1 || days[0].month == 3 || days[0].month == 5 || days[0].month == 7 || days[0].month == 8 || days[0].month == 10 || days[0].month == 12)
		day_Limit = 31; //1,3,5,7,8,10,12월은 31일까지 있다.
	else if (days[0].month == 4 || days[0].month == 6 || days[0].month == 9 || days[0].month == 11)
		day_Limit = 30; //4,6,9,11월은 30일까지 있다.
	else if (days[0].month == 2) //2월은 특수해서 따로 계산한다.
	{   //2월은 4년에 한번씩, 100으로 나누어 떨어지고 400으로 나누어 떨어지지 않는 해에는 29일까지 있다.
		if (days[0].year % 4 == 0 && days[0].year % 100 == 0 && days[0].year % 400 != 0)
			day_Limit = 29;
		else day_Limit = 28;    //그 외에는 28일까지 있다.
	}
	do {    //시작일을 입력하면 이후의 6일에 연속된 날짜가 자동으로 입력된다.
		printf("시작일을 입력해주세요 : ");
		scanf("%d", &days[0].day);
		if (days[0].day >= 1 && days[0].day <= day_Limit)
		{
			for (int i = 1; i < 7; i++)     // 1부터 6까지, 총 6회 반복해서 입력한다.
			{
				if (days[i - 1].day == day_Limit)   //직전 날짜가 이번달의 마지막 날이라면 1일을 입력한다.
				{
					days[i].day = 1;
					if (days[i - 1].month == 12)    //12월이라면 이후의 모든 날짜의 달을 1로, 년도를 +1 해준다.
					{
						for (int j = i; j < 7; j++)
						{
							days[j].month = 1;
							days[j].year++;
						}
					}
					else for (int j = 0; j < 7 - i; j++) days[i + j].month++;   //12월이 아니라면 이후의 모든 날짜의 달을 +1 해준다.

				}
				else days[i].day = days[i - 1].day + 1; //달의 마지막 날이 아니라면 직전 날짜+1일을 입력한다.
			}
			break;
		}
		else printf("올바른 숫자를 입력해주세요.\n");
	} while (1);
}
void print_schedule()
{
	hr();
	//스케줄 전체 표를 출력하는 함수
	printf("┌────────────────────────────────────────────────────────────────────────────────────────────────────┐\n│"); //첫째줄 레이아웃
	for (int i = 0; i < 40; i++) printf(" ");//둘째줄 공백 출력
	printf("%d.%d.%d~%d.%d.%d", days[0].year, days[0].month, days[0].day, days[6].year, days[6].month, days[6].day);//둘째 줄 숫자 출력
	for (int i = 0 + count_number(days[0].year) + count_number(days[0].month) + count_number(days[0].day) + count_number(days[6].year) + count_number(days[6].month) + count_number(days[6].day); i < 55; i++) printf(" ");/*날짜 자릿수를 제외한 만큼 공백 출력*/printf("│\n");
	printf("├┬────────┬────────────┬────────────┬────────────┬────────────┬────────────┬────────────┬────────────┤\n");//셋째줄 레이아웃
	printf("││  시간  │");//넷째줄
	for (int i = 0; i < 7; i++) //일주일을 각각 출력
	{
		for (int j = 0; j < 4; j++) printf(" ");    //공백 4개 출력
		printf("%d.%d", days[i].month, days[i].day);    //날짜 출력
		for (int j = 0 + count_number(days[i].month) + count_number(days[i].day); j < 7; j++) printf(" ");  //날짜 자릿수를 제외한 만큼 공백 출력
		printf("│");    //레이아웃
	}
	printf("\n");
	printf("├┼────────┼────────────┼────────────┼────────────┼────────────┼────────────┼────────────┼────────────┤\n");//셋째줄 레이아웃
	for (int time = 1; time < 25; time++)
	{
		printf("││  "); for (int i = 0 + count_number(time); i < 2; i++) printf("0");
		printf("%d:00 │", time); //시간대 출력
		for (int i = 0; i < 7; i++) //일주일의 일정 출력
		{
			printf(" ");
			for (int count = 0, j = 0; j < 12; j++) //한글은 한 글자에 2자리를 차지하고 4비트를 차지한다. 따라서 문자열을 3x(8/2) = 12 회 출력하며 영어 또는 공백이 2회 출력되었다면 횟수를 1회 차감한다.
			{
				if ((schedule[(i * 24) + time].name[j] & 0x80) != 1)
				{
					//일정 제목이 한글이 아니라면 2회 출력할 때마다 출력 횟수를 1회 차감한다.
					if (count == 1)
					{
						j++;
						count = 0;
					}
					else count++;
					if (schedule[(i * 24) + time].name[j] == '\0') printf(" "); //해당 문자가 null(\0)문자라면 공백을 출력한다.
					else printf("%c", schedule[(i * 24) + time].name[j]);
				}
				else if (j == 10 && count == 1) //마지막 1자리가 남았을 때 한글이 4회째 출력되려 한다면 공백을 출력한다.
				{
					j += 2;
					count = 0;
					printf(" ");
				}
				else printf("%c", schedule[(i * 24) + time].name[j]);   //한글이라면 그대로 3회 출력한다.
			}
			if (strlen(schedule[(i * 24) + time].name) > 8) printf("...│"); //일정 제목이 8글자를 넘어가면 말줄임표 출력.
			else printf("   │");                 //아니라면 공백 출력
		}
		printf("\n");
	}
	printf("└┴────────┴────────────┴────────────┴────────────┴────────────┴────────────┴────────────┴────────────┘\n");
}
void menu_system()  //메뉴를 출력하고 번호를 선택해 다른 함수를 실행시키는 함수
{
	int num;
	printf("    ┌─────────────────────┐\n");
	printf("    │ 1. 일정 등록        │\n");
	printf("    │ 2. 주단위 일정 표시 │\n");
	printf("    │ 3. 상세일정         │\n");
	printf("    │ 4. 종료             │\n");
	printf("    └─────────────────────┘");
	printf("     선택하십시오:");
	scanf("%d", &num);
	if (num == 1)
	{
		printf("일정등록 코드 \n");
		input_schedule();
	}
	else if (num == 2)
	{
		printf("[주 단위 일정] \n");
		print_schedule();
	}
	else if (num == 3)
	{
		printf("상세일정코드 \n");
	}
	else if (num == 4)
	{
		printf("종료되었습니다.\n");
		/*exit(0); */
	}
}
void input_schedule()   //일정을 입력하는 함수
{
	int day;//-------------------------------------------------------------------------------   여  기           부  터   -------------------------------------------------------------------------------------------

}
int count_number(int num)   //정수의 자릿수를 세는 함수
{
	int count = 0;
	while (num != 0)
	{
		num = num / 10;
		count++;
	}
	return count;
}