#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


struct movie                            //����ü ���� 
{
	char movie_title[50];               //��ȭ ���� ���ڿ�
	char name[50];                      //������ �̸� ���ڿ�
	int release_year;                    //���� ����

}info[5];


void addinfo(struct movie *Pinfo)
{

	printf("\t\t��ȭ�� �������� �Է��ϼ���: \n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d��° ��ȭ ����: ", i+ 1);
		scanf("&s", Pinfo->movie_title);
		printf("������ �̸�:");
		scanf("&s", Pinfo->name);
		printf("���� ����:");
		scanf("&d", Pinfo->release_year);

	}

}

void printstruct(struct movie *Pinfo)
{
	for (int i = 0; i < 5; i++)
	{
		printf("\t\t\t****��ȭ ����****\t\t\t\n");
		printf("%d��° ��ȭ ����: %s\n", i + 1, Pinfo->movie_title);
		printf("������ �̸�: %s\n", Pinfo->name);
		printf("���� ����: %d\n", Pinfo->release_year);

	}


}


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


//�ǽ� 2
{

	struct movie info[5];
	

	addinfo(info);
	printstruct(info);

	return 0;

}




