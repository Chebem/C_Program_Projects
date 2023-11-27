#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


struct movie                            //구조체 선언 
{
	char movie_title[50];               //영화 제목 문자열
	char name[50];                      //감독의 이름 문자열
	int release_year;                    //개봉 연도

}info[5];


void addinfo(struct movie *Pinfo)
{

	printf("\t\t영화의 정보들을 입력하세요: \n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d번째 영화 제목: ", i+ 1);
		scanf("&s", Pinfo->movie_title);
		printf("감독의 이름:");
		scanf("&s", Pinfo->name);
		printf("개봉 연도:");
		scanf("&d", Pinfo->release_year);

	}

}

void printstruct(struct movie *Pinfo)
{
	for (int i = 0; i < 5; i++)
	{
		printf("\t\t\t****영화 정보****\t\t\t\n");
		printf("%d번째 영화 제목: %s\n", i + 1, Pinfo->movie_title);
		printf("감독의 이름: %s\n", Pinfo->name);
		printf("개봉 연도: %d\n", Pinfo->release_year);

	}


}


int main()

//14주차 실습 1
/*{
	struct movie info;

	strcpy_s(info.movie_title, "20세기 소녀");
	strcpy_s(info.name, "방워리");
	info.release_year = 2022;

	printf("이름: 추쿠카 치네체벰\n학번:2022218070\n");
	printf("\t\t\t****영화 정보****\t\t\t\n");
	printf("영화 제목: %s\n\n", info.movie_title);
	printf("감독의 이름: %s\n\n", info.name);
	printf("개봉 연도: %d", info.release_year);
}*/


//실습 2
{

	struct movie info[5];
	

	addinfo(info);
	printstruct(info);

	return 0;

}




