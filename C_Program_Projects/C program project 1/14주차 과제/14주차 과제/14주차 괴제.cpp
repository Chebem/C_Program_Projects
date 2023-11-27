#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>



struct movie input_information();
void print_information(struct movie info);

struct movie                            //구조체 선언 
{
	char movie_title[50];               //영화 제목 문자열
	char name[50];                      //감독의 이름 문자열
	int release_year;                    //개봉 연도

};


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
{
	struct movie info[5];

	printf("영화의 정보를 입력하세요\n");
	info[5] = input_information();
	print_information(info[5]);


}




struct movie input_information()
{

	struct movie info;
	for (int i = 0; i < 5; i++)
	{
		printf("%d번째 영화 제목을 입력하세요: ", i + 1);
		scanf("%s", &info.movie_title);
		printf("감독의 이름을 입력하세요: ");
		scanf("%s", &info.name);
		printf("개봉 연도를 입력하세요: ");
		scanf("%d", &info.release_year);
	}printf("\n");

	return info;
};

void print_information(struct movie info[5])
{
	printf("이름: 추쿠카 치네체벰\n학번:2022218070\n");
	for (int i = 0; i < 5; i++)
	{
		printf("\t\t\t****영화 정보****\t\t\t\n");
		printf("%d번쨰 영화 제목: %s\n\n", i + 1, info[i].movie_title);
		printf("감독의 이름: %s\n\n", info[i].name);
		printf("개봉 연도: %d", info[i].release_year);
	}
	printf("\n");
}
