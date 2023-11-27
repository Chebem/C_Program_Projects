#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct supporting    //intialize and define the structre (practice 3)
{
	char name1[30];
	char name2[30];
	char name3[30];
};

struct movie                            //구조체 선언 
{
	char movie_title[50];               //영화 제목 문자열
	char name[50];                      //감독의 이름 문자열
	int release_year;                    //개봉 연도
	char main_role;
	struct supporting role;

}info[5];

struct phonenumber   //define and intalialize nested structure (Practice 4)
{
	char mobile[50];
	char tel[50];
};

struct profile     //define and intialize structure(Practice 4) 
{
	char name[50];
	int std_num;
	struct phonenumber phone;
	int score;
	int grade;
};

void addinfo(struct movie *Pinfo)     //define and intialize function to collect input from user 
{

	printf("\t\t영화의 정보들을 입력하세요: \n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d번째 영화 제목: ", i + 1);
		scanf("%s", &Pinfo->movie_title);
		printf("감독의 이름:");
		scanf("%s", &Pinfo->name);
		printf("개봉 연도:");
		scanf("%i", &Pinfo->release_year);
		printf("주연 이름:");
		scanf("%s", &Pinfo->main_role);    //addditional supporting role name 1
		printf("조연의 1명의 이름: ");
		scanf("%s", &Pinfo->role.name1);
		printf("조연의 2명의 이름: ");      //addditional supporting role name 2
		scanf("%s", &Pinfo->role.name2);
		printf("조연의 3명의 이름: ");       
		scanf("%s", &Pinfo->role.name3);   //additional supporing role name 3
		Pinfo++;                  // update pointer to point at next element
	}

}

void printstruct(struct movie *Pinfo)    //define and intialize function to display information using pointer variable
{
	for (int i = 0; i < 5; i++)
	{
		printf("\t\t\t****영화 정보****\t\t\t\n");
		printf("%d번째 영화 제목: %s\n", i + 1, Pinfo->movie_title);   //
		printf("감독의 이름: %s\n", Pinfo->name);
		printf("개봉 연도: %d\n", Pinfo->release_year);
		printf("주연 이름: %s", Pinfo->main_role);
		printf("조연의 1명의 이름: %s", Pinfo->role.name1);   //additional supporting role name 
		printf("조연의 2명의 이름: %s", Pinfo->role.name2);
		printf("조연의 3명의 이름: %s", Pinfo->role.name3);
		Pinfo++;           //update pointer to point at next element
	}


}

void printstruct(struct profile P)         //Function to display students infromation in the structure
{
	printf("이름: %s\n", P.name);
	printf("학번: %d\n", P.std_num);
	printf("핸드폰 번호: %s\n", P.phone.mobile);
	printf("집전화: %s\n", P.phone.tel);
	printf("점수: %d\n", P.score);
	printf("학점: %c\n", P.grade);

}

void changeprofile(struct profile *F)          //INTIALIZE AND  CREATE POINTER FUNCTION TO CHANGE STRUCTURE MEMBERS INFORMATION
{
	strcpy((*F).name, "Fredrick Stanley");
	(*F).std_num = 2022218060;
	strcpy((*F).phone.mobile,  "010-9661-3935");
	strcpy((*F).phone.tel,  "043-654-987");
	(*F).score= 60;
	(*F).grade = 'C';
	printstruct((*F));

}


int main()

//14주차 실습 1
/*{
	struct movie info;

	strcpy_s(info.movie_title, "20세기 소녀");      //declare the sturcture and define movie title
	strcpy_s(info.name, "방워리");                  //declare the structure and define      
	info.release_year = 2022;                     //declare the structure and define

	printf("이름: 추쿠카 치네체벰\n학번:2022218070\n");
	printf("\t\t\t****영화 정보****\t\t\t\n");         
	printf("영화 제목: %s\n\n", info.movie_title);         //using the structure to 
	printf("감독의 이름: %s\n\n", info.name);
	printf("개봉 연도: %d", info.release_year);
}*/


//실습 2                                    
/*{

	struct movie info[5];                       // // movie structure variable

	printf("\t\t\t이름:추쿠카 치네체벰\n\t\t\t학번: 2022218070\n");
	printf("\n");

	addinfo(info);               //call the function using info as the argument 
	printstruct(info);           // to display the information call the function with info as argument 

	return 0;

}*/

//실습 3
/*{
	struct movie info[5];

	printf("\t\t\t이름:추쿠카 치네체벰\n\t\t\t학번: 2022218070\n");
	printf("\n");

	addinfo(info);              
	printstruct(info);       //repeated practice 2 but modfidified to include supporitng role and main roles name

	return 0;
}*/

//실습 4
{

	printf("\t\t\t이름:추쿠카 치네체벰\n\t\t\t학번: 2022218070\n");
	printf("\n");
	struct profile P;                     //Initalize student structure
	struct profile* PP = &P;             //Intilaze pointer variable pointmg to structure P 
	strcpy(P.name, "Valerie Dennis");     //define structure member
	P.std_num = 2022218001;                 //define structure member
	strcpy(P.phone.mobile, "010-7769-8807");      //using string to define structure member
	strcpy(P.phone.tel, "043-445-476");           //using string to define structure member
	P.score = 90;                                 //define structure member
	P.grade = 'A';                                //define structure member
	printstruct(P);                                // Call to function with structure P as argument
	printf("\n");
	changeprofile(PP);                         //Call to funcion to change structure information within a function
	printf("\n");
	printstruct(P);                             //Re display the change information within the struture P



}

