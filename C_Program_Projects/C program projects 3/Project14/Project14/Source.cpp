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
		printf("%d��° �л��� �й��� �Է��ϼ���: ", i + 1);
		scanf("%d", &std_id + i);
		printf("�л��� �̸��� �Է��ϼ���: ");
		scanf("%s", &name + i);
		printf("�л��� ������ �Է��ϼ���: ");
		scanf("%f", &score + i);
	}
	printf("\n");

	//Display the students information
	for (int i = 0; i < sizeof(std_id) / 4; i++) {
		printf("%d��° �л��� �й���: %d", i + 1, std_id+i);
		printf("%��° �л��� �̸���: %s\n",i + 1, name+i);

		if (score >= 90) {
			printf("%d��° �л��� ������ A�Դϴ�", i + 1, score);
		}
		else if (score >= 80) {
			printf("%d��° �л��� ������ B�Դϴ�", i + 1);
		}
		else if (score >= 70) {
			printf("%d��° �л��� ������ C�Դϴ�", i + 1);
		}
		else if (score >= 50) {
			printf("%��° �л��� ������ D�Դϴ�", i + 1);
		}
		else {
			printf("%d��° �л��� ������ F�Դϴ�", i + 1);
		}

	}
}
