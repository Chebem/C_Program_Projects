#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


struct movie input_info();
void printstruct(struct movie info[5]);

struct movie                            //����ü ���� 
{
	char movie_title[50];               //��ȭ ���� ���ڿ�
	char name[50];                      //������ �̸� ���ڿ�
	int release_year;                    //���� ����

}; movie info[5];


int main()

//14���� �ǽ� 1
/*{
	struct movie info;

	strcpy_s(info.movie_title, "20���� �ҳ�");
	strcpy_s(info.name, "�����");
	info.release_year = 2022;

	printf("�̸�: ����ī ġ��ü��\n�й�:2022218070\n");
	printf("\t\t\t****��ȭ ����****\t\t\t\n");
	printf("��ȭ ����: %s\n\n", info.movie_title);
	printf("������ �̸�: %s\n\n", info.name);
	printf("���� ����: %d", info.release_year);
}*/


{

	struct movie info[5];


	printf("\t\t\t�̸�: ����ī ġ��ü��\n\t\t\t�й�:2022218070\n");
	printf("��ȭ�� ������ �Է��ϼ���\n");

	info[5] = input_info();



}


struct movie input_info()
{
	struct movie info[5];


	for (int i = 0; i < 4; i++)
	{
		printf("%d��° ��ȭ ������ �Է��ϼ���: ", i + 1);
		scanf("%s", &info[i].movie_title);
		printf("������ �̸��� �Է��ϼ���: ");
		scanf("%s", &info[i].name);
		printf("���� ������ �Է��ϼ���: ");
		scanf("%d", &info[i].release_year);
	}


	return info[5];

}

void printstruct(struct movie info[5])
{
	printf("\t\t\t****��ȭ ����****\t\t\t\n");
	for (int i = 5; i < 4; i++)
	{
		printf("%d���� ��ȭ ����: %s\n", i + 1, info[i].movie_title);
		printf("������ �̸�: %s\n", info[i].name);
		printf("���� ����: %d\n", info[i].release_year);


	}
}
