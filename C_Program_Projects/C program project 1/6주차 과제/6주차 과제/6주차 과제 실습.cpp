#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>


int main()

//실습 1
/*{
	printf("\t\t이름: 추쿠카 체벰\n\t\t학번: 2022218070\n");

	//실습 1
	char name[] = "추쿠카 치네체벰 이베트";          //문자열 문자열릏 선언
	int std_id = 2022218070;                       //변수 선언

	printf("\n이름: %s\n 학번: %d", name, std_id);   //결과 출력

}*/


//실습 2
/*{
	int std_id = 2022218070;                            //변수 선언

	printf("이름: 추쿠카 치네체벰\n학번: %d", std_id);    // 결과 출력

}*/


//실습 3
/*{
	float A;                                 //실수를 선언

	printf("숫자를 입력하세요: ");            //사용자 입력
	scanf("%f", &A);

	printf("1.    |%f|\n", A);              //결과 출력
	printf("2.    |%10.3f|\n", A);
	printf("3.    |%-10.3f|\n", A);
	printf("4.    |%2.3f|\n", A);
	printf("5.    |%+-20.10f|\n", A);
	printf("6.    |%+20.10f|\n", A);
	printf("7.    |%+-20.10f|\n", A);
	printf("8.    |%+20.10f|\n", A);

}*/


//실습 4
/*{
	const float g = 9.8;      //고정상수 선언
	int t;                   //변수 선언
	float v, s;

	printf("시간을 입력하세요: ");
	scanf("%d", &t);
	v = g * t;                                //속도 공식
	s = 0.5 * (g * pow(t, 2));                //거리 공식
	printf("속도는: |%-10.3f|\n 거리는: |%-10.3f|", v, s);

}*/


//실습 5
/*{
	int a;                                        //변수를 선언
	scanf("%d", &a);                              //변수를 입력받아
	while (a > 0 || a < 0)                        //조건 선언
	{
		printf("입력받은 정수는: %d\n", a);         //결과 출력
		scanf("%d", &a);
	}
	printf("0 입력하였으므로 포로그램을 종료합니다");

	while (1)
	{
		scanf("%d", &a);
		if (a == 0)                                  //조건 선언
		{
			printf("0을 이벽하였으므로 프로그램을 종료합니다");   //결과 출력
			break;
		}
		else
		{
			printf("입력받은 정수는: %d", a);
		}
	}
}*/


//실습 6
/*{

	//변수들 선언 
	int num = 3;           
	int password;
	int set_password;


	//기본 메뉴를 만들고 출력
	printf("************************************\n");
	printf("****\t메뉴를 선택하세요\t****\n");
	printf("************************************\n");
	printf("****\t 1. 도어락 번호를 \t****\n");
	printf("************************************\n");
	printf("****\t 2. 작금 헤제기 \t****\n");
	printf("************************************\n");
	printf("****\t 3. 종료하기 \t\t****\n");
	printf("************************************\n");

	//조건 선언 
	while (1)                                          //루르 중에 사용
	{
		printf("번호를 입력: ");
		scanf("%d", &num); 

		if (num > 3 || num < 1)                       //조건 선언
		{
			printf("잘못된 번호를 입력하였습니다\n");
		}
		else
			printf("\n");
		switch (num)                               //스위치를 사용하여 루프한다
		{

		case(1):
			printf("세로운 번호를 입력하세요: ");
			scanf("%d", &password);
			break;
		case(2):
			while (1)
			{
				printf("비밀번호를 입력하세요: ");
				scanf("%d", &set_password);

				if (set_password == password)
				{
					printf("로그인 되었습니다!!!");
					printf("\n메인 메뉴로 들어갑니다\n");
					break;
				}
				else
				{
					printf("잘못된 비밀범호를 입력하였습니다\n");
				}
			}

		case(3):
			break;
		}
		if (num == 3)             //저건 사용하여 WHILE 루프를 차단
		{
			printf("종료합니다");
			break;

		}

	}
}*/


