#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>



struct movie input_information();
void print_information(struct movie info);

struct movie                            //����ü ���� 
{
	char movie_title[50];               //��ȭ ���� ���ڿ�
	char name[50];                      //������ �̸� ���ڿ�
	int release_year;                    //���� ����

};


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

	printf("��ȭ�� ������ �Է��ϼ���\n");
	info[5] = input_information();
	print_information(info[5]);


}




struct movie input_information()
{

	struct movie info;
	for (int i = 0; i < 5; i++)
	{
		printf("%d��° ��ȭ ������ �Է��ϼ���: ", i + 1);
		scanf("%s", &info.movie_title);
		printf("������ �̸��� �Է��ϼ���: ");
		scanf("%s", &info.name);
		printf("���� ������ �Է��ϼ���: ");
		scanf("%d", &info.release_year);
	}printf("\n");

	return info;
};

void print_information(struct movie info[5])
{
	printf("�̸�: ����ī ġ��ü��\n�й�:2022218070\n");
	for (int i = 0; i < 5; i++)
	{
		printf("\t\t\t****��ȭ ����****\t\t\t\n");
		printf("%d���� ��ȭ ����: %s\n\n", i + 1, info[i].movie_title);
		printf("������ �̸�: %s\n\n", info[i].name);
		printf("���� ����: %d", info[i].release_year);
	}
	printf("\n");
}
