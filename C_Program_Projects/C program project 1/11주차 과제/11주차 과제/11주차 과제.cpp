#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>

int main()



//실습 예제 1
{
	int X[2][3] = { {1, 2, 3}, {4, 5, 6} };          // 2차원 배열의 크기와 내용을 함께 선언

	int col;                                        //가로   선언
	int row;                                        //세로 선언
	col = sizeof(X[0]) / sizeof(int);
	row = (sizeof(X) / sizeof(int)) / col;

	printf("\t\t이름: 추쿠카 치네체벰\t\n");
	printf("\t\t학번: 2022218070\t\n\n");

	printf("배열 X의 전체 요소 개수: %i\n", sizeof(X) / sizeof(int));    //배열 점체 요소 개수 출력
	printf("배열 X의 가로 크기: %i\n", col);                             //배열 가로 크기 출력
	printf("배열 X의 세로 크기: %i\n", row);                             //배열 세로 크기 출력

	for (int i = 0; i < 2; i++)                         //전체 요소 배열을 표시를 위한 반복
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", X[i][j]);                      //2차원 배열 전체 내용을 출력
		}
		printf("\n");
	}
}

//실습 예제2
/*{

	int X[2][3] = { {1, 2, }, {5} };          // 2차원 배열의 크기와 내용 일부 선언

	int col;                                        //가로   선언
	int row;                                        //세로 선언
	col = sizeof(X[0]) / sizeof(int);
	row = (sizeof(X) / sizeof(int)) / col;

	printf("\t\t이름: 추쿠카 치네체벰\t\n");
	printf("\t\t학번: 2022218070\t\n\n");

	printf("배열 X의 전체 요소 개수: %i\n", sizeof(X) / sizeof(int));    //배열 점체 요소 개수 출력
	printf("배열 X의 가로 크기: %i\n", col);                             //배열 가로 크기 출력
	printf("배열 X의 세로 크기: %i\n", row);                             //배열 세로 크기 출력

	for (int i = 0; i < 2; i++)                         //전체 요소 배열을 표시를 위한 반복
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", X[i][j]);                      //배열 전체 내용을 출력
		}
		printf("\n");
	}
}*/

//실습 예제3
/*{
	int X[][5] = { {1, 2, 3 }, {4, 5, 6}, {7, 8, 9 } };     // 2차원 배열의 내용 전체와 한 줄의 크기를 선언


	int col;                                        //가로   선언
	int row;                                        //세로 선언
	col = sizeof(X[0]) / sizeof(int);
	row = (sizeof(X) / sizeof(int)) / col;

	printf("\t\t이름: 추쿠카 치네체벰\t\n");
	printf("\t\t학번: 2022218070\t\n\n");

	printf("배열 X의 전체 요소 개수: %i\n", sizeof(X) / sizeof(int));    //배열 점체 요소 개수 출력
	printf("배열 X의 가로 크기: %i\n", col);                             //배열 가로 크기 출력
	printf("배열 X의 세로 크기: %i\n", row);                             //배열 세로 크기 출력

	for (int i = 0; i < row; i++)                         //전체 요소 배열을 표시를 위한 반복
	{
		for (int j = 0; j < col; j++)
		{
			printf("%d ", X[i][j]);                      //배열 전체 내용을 출력
		}
		printf("\n");

	}

}*/

//실슴 예제4
/*{
	int X[][3] = { {1, 2, 3 }, {4, 5, 6}, {7, 8, 9 } };     // 2차원 배열의 내용 전체와 한 줄의 크기를 선언

	int col;                                                //가로 선언
	int row;                                                //세로 선언
	col = sizeof(X[0]) / sizeof(int);
	row = (sizeof(X) / sizeof(int)) / col;

	printf("\t\t이름: 추쿠카 치네체벰\t\n");
	printf("\t\t학번: 2022218070\t\n\n");

	printf("배열 X의 전체 요소 개수: %i\n", sizeof(X) / sizeof(int));    //배열 점체 요소 개수 출력
	printf("배열 X의 가로 크기: %i\n", col);                             //배열 가로 크기 출력
	printf("배열 X의 세로 크기: %i\n", row);                             //배열 세로 크기 출력

	for (int i = 0; i < row; i++)                         //전체 요소 배열을 표시를 위한 반복
	{
		for (int j = 0; j < col; j++)
		{
			printf("%d ", X[i][j]);                      //배열 전체 내용을 출력
		}
		printf("\n");
	}
}*/

//실습 예제5
/*{
	int col, row;                    ////가로와 세로 선언
	char A[][20] = { "첫번째 줄", "두번째 줄", "세번째 줄", "네번째 줄", "다섯번째 줄", "여섯번째 줄" };   //문자열과 2차원 배열 배열의 내용 전체와 한 줄의 크기를 선언

	col = sizeof(A[0]) / sizeof(char);
	row = (sizeof(A) / sizeof(char)) / col;

	printf("\t\t이름: 추쿠카 치네체벰\t\n");
	printf("\t\t학번: 2022218070\t\n\n");

	printf("배열 X의 전체 요소 개수: %i\n", sizeof(A) / sizeof(char));    //문자열 점체 요소 개수 출력
	printf("배열 X의 가로 크기: %i\n", col);                             //문자열 가로 크기 출력
	printf("배열 X의 세로 크기: %i\n\n", row);                             //문자열 세로 크기 출력

	for (int i = 0; i < row; i++)                //전체 요소 문자열을 표시를 위한 반복
	{
		printf("%s\n", A[i]);                 ////문자열 전체 내용을 출력
	}


}*/


//실습 예제6
/*{
	                   
	char A[5][30];             //문자열과 2차원 문자열을 선언
	int col, row;              //가로와 세로 선언

	col = sizeof(A[0]) / sizeof(int);
	row = (sizeof(A) / sizeof(int)) / col;

	printf("\t\t이름: 추쿠카 치네체벰\t\n");
	printf("\t\t학번: 2022218070\t\n\n");

	printf("배열 X의 전체 요소 개수: %i\n", sizeof(A) / sizeof(char));    //문자열 점체 요소 개수 출력
	printf("배열 X의 가로 크기: %i\n", col);                             //문자열 가로 크기 출력
	printf("배열 X의 세로 크기: %i\n\n", row);                             //문자열 세로 크기 출력

	for (int i = 0; i < row; i++)                //전체 요소 문자열을 표시를 위한 반복
	{
		scanf("%s\n", &A[i]);                    //배열의 행(세로) 마다 문자열 입력
			
	}
	printf("\n");

	for (int i = 0; i < row; i++)                 //전체 요소 문자열을 표시를 위한 반복
	{
		printf("%s\n", A[i]);                      //문자열 전체 내용을 출력
	}

}*/


//실습 6
/*int findGrade(int score)            // 성적 출력하는 함수
{
	
		if (score < 0 || score >100)          //점수가 유효한지 아닌지 조건
		{
			printf("잘못된 점수");             
		}

		if (score >= 90 && score <= 100)   //
		{
			printf("학생의 점수는 A입니다");
		}

		else if (score >= 80)
		{
			printf("학생의 점수는 B입니다");

		}

		else if (score >= 70)
		{
			printf("이학생의 점수는 C입니다");
		}

		else if (score >= 60)
		{
			printf("이학생의 점수는 D입니다");
		}

		else if (score >= 50)
		{
			printf("이학생의 점수는 E입니다");
		}

		else
		{
			printf("이학생의 점수는 F입니다");
		}


		
	
	return score;
}*/
		
/*{
	int std_id[5];                 //학생 번호 입력 수
	char name[5][30];              //학생의 이름 수
	int score[5];                  //학생의 점수 입력 수
	
	printf("\t\t이름: 추쿠카 치네체벰\t\n");
	printf("\t\t학번: 2022218070\t\n\n");
	
	for (int i = 0; i < 5; i++)                        //학생의 정보 이력을 반복
	{
		printf("%d번쩨의 학생의 학번을 입력하세요: ", i + 1);
		scanf("%d", &std_id[i]);
		printf("\n학생의 이름을 입력하세요: ");
		scanf("%s", &name[i]);
		printf("\n학생의 점수를 입력하세요: ");
		scanf("%d", &score[i]);
		
	}

	printf("\n");

	//학생의 정보를 표시
	for (int i = 0; i < 5; i++)
	{
		printf("%d번째의 학생의 학번은: %d\n", i + 1, std_id[i]);
		printf("학생의 이름은: %s\n", name[i]);
		printf("학생의 점수는: %d\n", score[i]);
		findGrade(score[i]);                         //성적 점수 함수를 호출
		printf("\n\n");
	}
	
}*/

