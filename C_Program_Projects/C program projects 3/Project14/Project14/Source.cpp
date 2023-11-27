#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*void grade(float X)
{
	
}*/

/*void grade(float X);*/
int main()
{
	int std_id[5];
	char name[50];
	int score[5];

	for (int i = 0; i < sizeof(std_id) / 4; i++) {
		printf("%d번째 학생의 학번을 입력하세요: ", i + 1);
		scanf("%d", &std_id + i);
		printf("학생의 이름을 입력하세요: ");
		scanf("%s", &name + i);
		printf("학생의 점수를 입력하세요: ");
		scanf("%f", &score + i);
	}
	printf("\n");

	//Display the students information
	for (int i = 0; i < sizeof(std_id) / 4; i++) {
		printf("%d번째 학생의 학번은: %d", i + 1, std_id+i);
		printf("%번째 학생의 이름은: %s\n",i + 1, name+i);

		if (score >= 90) {
			printf("%d번째 학생의 점수는 A입니다", i + 1, score);
		}
		else if (score >= 80) {
			printf("%d번째 학생의 점수는 B입니다", i + 1);
		}
		else if (score >= 70) {
			printf("%d번째 학생의 점수는 C입니다", i + 1);
		}
		else if (score >= 50) {
			printf("%번째 학생의 점수는 D입니다", i + 1);
		}
		else {
			printf("%d번째 학생의 점수는 F입니다", i + 1);
		}

	}
}
