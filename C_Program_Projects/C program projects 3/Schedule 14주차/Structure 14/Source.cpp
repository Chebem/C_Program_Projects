#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct profile               //����ü ����
{
	char name[50];             //����ü�� ���
	int std_num;			   //����ü�� ���
	int score;				   //����ü�� ���
	char grade;				   //����ü�� ���
};

void printstruct(profile P)
{
	printf("�̸�: %s\n", P.name);
	printf("�й�: %d\n", P.std_num);
	printf("����: %d\n", P.score);

	printf("����: %c\n", P.grade);

}








struct profile setprofile()
{
	struct profile P;
	printf("�̸��� �Է��ϼ���: ");
	scanf("%s", &P.name);
	printf("�й��� �Է��ϼ���: ");
	scanf("%d", &P.std_num);
	printf("������ �Է��ϼ���: ");
	scanf("%d", &P.score);
	printf("������ �Է��ϼ���: ");
	scanf("%c", &P.grade);
	printf("\n");

	return P;
}

int main()
//declare struct and struct variable
/*{
	struct profile P;                    //����ü ���� ���� (declare structure variable )

	strcpy_s(P.name, "ȯ����");             //���ڿ��� �����ϴ� �Լ�
	P.std_num = 2022218007;
	P.score = 87;
	P.grade = 'B';

	printf("�̸�: %s\n", P.name);
	printf("�й�: %d\n", P.std_num);
	printf("����: %d\n", P.score);
	printf("����: %c\n", P.grade);
}*/

//using struct and function
/*{
	struct profile P;
	strcpy_s(P.name, "������");
	P.std_num = 2022218070;
	P.score = 77;
	P.grade = 'C';

	printstruct(P);

}*/

//A function that prints a structure
/*{
	struct profile P;
	P = setprofile();
	printstruct(P);
}*/




//�ǽ� 2
{
	struct movie info;
	info = movies_information();
	print_information(info[5]);
}