#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>


int main()

//�ǽ� 1
/*{
	printf("\t\t�̸�: ����ī ü��\n\t\t�й�: 2022218070\n");

	//�ǽ� 1
	char name[] = "����ī ġ��ü�� �̺�Ʈ";          //���ڿ� ���ڿ��k ����
	int std_id = 2022218070;                       //���� ����

	printf("\n�̸�: %s\n �й�: %d", name, std_id);   //��� ���

}*/


//�ǽ� 2
/*{
	int std_id = 2022218070;                            //���� ����

	printf("�̸�: ����ī ġ��ü��\n�й�: %d", std_id);    // ��� ���

}*/


//�ǽ� 3
/*{
	float A;                                 //�Ǽ��� ����

	printf("���ڸ� �Է��ϼ���: ");            //����� �Է�
	scanf("%f", &A);

	printf("1.    |%f|\n", A);              //��� ���
	printf("2.    |%10.3f|\n", A);
	printf("3.    |%-10.3f|\n", A);
	printf("4.    |%2.3f|\n", A);
	printf("5.    |%+-20.10f|\n", A);
	printf("6.    |%+20.10f|\n", A);
	printf("7.    |%+-20.10f|\n", A);
	printf("8.    |%+20.10f|\n", A);

}*/


//�ǽ� 4
/*{
	const float g = 9.8;      //������� ����
	int t;                   //���� ����
	float v, s;

	printf("�ð��� �Է��ϼ���: ");
	scanf("%d", &t);
	v = g * t;                                //�ӵ� ����
	s = 0.5 * (g * pow(t, 2));                //�Ÿ� ����
	printf("�ӵ���: |%-10.3f|\n �Ÿ���: |%-10.3f|", v, s);

}*/


//�ǽ� 5
/*{
	int a;                                        //������ ����
	scanf("%d", &a);                              //������ �Է¹޾�
	while (a > 0 || a < 0)                        //���� ����
	{
		printf("�Է¹��� ������: %d\n", a);         //��� ���
		scanf("%d", &a);
	}
	printf("0 �Է��Ͽ����Ƿ� ���α׷��� �����մϴ�");

	while (1)
	{
		scanf("%d", &a);
		if (a == 0)                                  //���� ����
		{
			printf("0�� �̺��Ͽ����Ƿ� ���α׷��� �����մϴ�");   //��� ���
			break;
		}
		else
		{
			printf("�Է¹��� ������: %d", a);
		}
	}
}*/


//�ǽ� 6
/*{

	//������ ���� 
	int num = 3;           
	int password;
	int set_password;


	//�⺻ �޴��� ����� ���
	printf("************************************\n");
	printf("****\t�޴��� �����ϼ���\t****\n");
	printf("************************************\n");
	printf("****\t 1. ����� ��ȣ�� \t****\n");
	printf("************************************\n");
	printf("****\t 2. �۱� ������ \t****\n");
	printf("************************************\n");
	printf("****\t 3. �����ϱ� \t\t****\n");
	printf("************************************\n");

	//���� ���� 
	while (1)                                          //�縣 �߿� ���
	{
		printf("��ȣ�� �Է�: ");
		scanf("%d", &num); 

		if (num > 3 || num < 1)                       //���� ����
		{
			printf("�߸��� ��ȣ�� �Է��Ͽ����ϴ�\n");
		}
		else
			printf("\n");
		switch (num)                               //����ġ�� ����Ͽ� �����Ѵ�
		{

		case(1):
			printf("���ο� ��ȣ�� �Է��ϼ���: ");
			scanf("%d", &password);
			break;
		case(2):
			while (1)
			{
				printf("��й�ȣ�� �Է��ϼ���: ");
				scanf("%d", &set_password);

				if (set_password == password)
				{
					printf("�α��� �Ǿ����ϴ�!!!");
					printf("\n���� �޴��� ���ϴ�\n");
					break;
				}
				else
				{
					printf("�߸��� ��й�ȣ�� �Է��Ͽ����ϴ�\n");
				}
			}

		case(3):
			break;
		}
		if (num == 3)             //���� ����Ͽ� WHILE ������ ����
		{
			printf("�����մϴ�");
			break;

		}

	}
}*/


