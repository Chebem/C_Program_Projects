#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>

int main()



//�ǽ� ���� 1
{
	int X[2][3] = { {1, 2, 3}, {4, 5, 6} };          // 2���� �迭�� ũ��� ������ �Բ� ����

	int col;                                        //����   ����
	int row;                                        //���� ����
	col = sizeof(X[0]) / sizeof(int);
	row = (sizeof(X) / sizeof(int)) / col;

	printf("\t\t�̸�: ����ī ġ��ü��\t\n");
	printf("\t\t�й�: 2022218070\t\n\n");

	printf("�迭 X�� ��ü ��� ����: %i\n", sizeof(X) / sizeof(int));    //�迭 ��ü ��� ���� ���
	printf("�迭 X�� ���� ũ��: %i\n", col);                             //�迭 ���� ũ�� ���
	printf("�迭 X�� ���� ũ��: %i\n", row);                             //�迭 ���� ũ�� ���

	for (int i = 0; i < 2; i++)                         //��ü ��� �迭�� ǥ�ø� ���� �ݺ�
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", X[i][j]);                      //2���� �迭 ��ü ������ ���
		}
		printf("\n");
	}
}

//�ǽ� ����2
/*{

	int X[2][3] = { {1, 2, }, {5} };          // 2���� �迭�� ũ��� ���� �Ϻ� ����

	int col;                                        //����   ����
	int row;                                        //���� ����
	col = sizeof(X[0]) / sizeof(int);
	row = (sizeof(X) / sizeof(int)) / col;

	printf("\t\t�̸�: ����ī ġ��ü��\t\n");
	printf("\t\t�й�: 2022218070\t\n\n");

	printf("�迭 X�� ��ü ��� ����: %i\n", sizeof(X) / sizeof(int));    //�迭 ��ü ��� ���� ���
	printf("�迭 X�� ���� ũ��: %i\n", col);                             //�迭 ���� ũ�� ���
	printf("�迭 X�� ���� ũ��: %i\n", row);                             //�迭 ���� ũ�� ���

	for (int i = 0; i < 2; i++)                         //��ü ��� �迭�� ǥ�ø� ���� �ݺ�
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", X[i][j]);                      //�迭 ��ü ������ ���
		}
		printf("\n");
	}
}*/

//�ǽ� ����3
/*{
	int X[][5] = { {1, 2, 3 }, {4, 5, 6}, {7, 8, 9 } };     // 2���� �迭�� ���� ��ü�� �� ���� ũ�⸦ ����


	int col;                                        //����   ����
	int row;                                        //���� ����
	col = sizeof(X[0]) / sizeof(int);
	row = (sizeof(X) / sizeof(int)) / col;

	printf("\t\t�̸�: ����ī ġ��ü��\t\n");
	printf("\t\t�й�: 2022218070\t\n\n");

	printf("�迭 X�� ��ü ��� ����: %i\n", sizeof(X) / sizeof(int));    //�迭 ��ü ��� ���� ���
	printf("�迭 X�� ���� ũ��: %i\n", col);                             //�迭 ���� ũ�� ���
	printf("�迭 X�� ���� ũ��: %i\n", row);                             //�迭 ���� ũ�� ���

	for (int i = 0; i < row; i++)                         //��ü ��� �迭�� ǥ�ø� ���� �ݺ�
	{
		for (int j = 0; j < col; j++)
		{
			printf("%d ", X[i][j]);                      //�迭 ��ü ������ ���
		}
		printf("\n");

	}

}*/

//�ǽ� ����4
/*{
	int X[][3] = { {1, 2, 3 }, {4, 5, 6}, {7, 8, 9 } };     // 2���� �迭�� ���� ��ü�� �� ���� ũ�⸦ ����

	int col;                                                //���� ����
	int row;                                                //���� ����
	col = sizeof(X[0]) / sizeof(int);
	row = (sizeof(X) / sizeof(int)) / col;

	printf("\t\t�̸�: ����ī ġ��ü��\t\n");
	printf("\t\t�й�: 2022218070\t\n\n");

	printf("�迭 X�� ��ü ��� ����: %i\n", sizeof(X) / sizeof(int));    //�迭 ��ü ��� ���� ���
	printf("�迭 X�� ���� ũ��: %i\n", col);                             //�迭 ���� ũ�� ���
	printf("�迭 X�� ���� ũ��: %i\n", row);                             //�迭 ���� ũ�� ���

	for (int i = 0; i < row; i++)                         //��ü ��� �迭�� ǥ�ø� ���� �ݺ�
	{
		for (int j = 0; j < col; j++)
		{
			printf("%d ", X[i][j]);                      //�迭 ��ü ������ ���
		}
		printf("\n");
	}
}*/

//�ǽ� ����5
/*{
	int col, row;                    ////���ο� ���� ����
	char A[][20] = { "ù��° ��", "�ι�° ��", "����° ��", "�׹�° ��", "�ټ���° ��", "������° ��" };   //���ڿ��� 2���� �迭 �迭�� ���� ��ü�� �� ���� ũ�⸦ ����

	col = sizeof(A[0]) / sizeof(char);
	row = (sizeof(A) / sizeof(char)) / col;

	printf("\t\t�̸�: ����ī ġ��ü��\t\n");
	printf("\t\t�й�: 2022218070\t\n\n");

	printf("�迭 X�� ��ü ��� ����: %i\n", sizeof(A) / sizeof(char));    //���ڿ� ��ü ��� ���� ���
	printf("�迭 X�� ���� ũ��: %i\n", col);                             //���ڿ� ���� ũ�� ���
	printf("�迭 X�� ���� ũ��: %i\n\n", row);                             //���ڿ� ���� ũ�� ���

	for (int i = 0; i < row; i++)                //��ü ��� ���ڿ��� ǥ�ø� ���� �ݺ�
	{
		printf("%s\n", A[i]);                 ////���ڿ� ��ü ������ ���
	}


}*/


//�ǽ� ����6
/*{
	                   
	char A[5][30];             //���ڿ��� 2���� ���ڿ��� ����
	int col, row;              //���ο� ���� ����

	col = sizeof(A[0]) / sizeof(int);
	row = (sizeof(A) / sizeof(int)) / col;

	printf("\t\t�̸�: ����ī ġ��ü��\t\n");
	printf("\t\t�й�: 2022218070\t\n\n");

	printf("�迭 X�� ��ü ��� ����: %i\n", sizeof(A) / sizeof(char));    //���ڿ� ��ü ��� ���� ���
	printf("�迭 X�� ���� ũ��: %i\n", col);                             //���ڿ� ���� ũ�� ���
	printf("�迭 X�� ���� ũ��: %i\n\n", row);                             //���ڿ� ���� ũ�� ���

	for (int i = 0; i < row; i++)                //��ü ��� ���ڿ��� ǥ�ø� ���� �ݺ�
	{
		scanf("%s\n", &A[i]);                    //�迭�� ��(����) ���� ���ڿ� �Է�
			
	}
	printf("\n");

	for (int i = 0; i < row; i++)                 //��ü ��� ���ڿ��� ǥ�ø� ���� �ݺ�
	{
		printf("%s\n", A[i]);                      //���ڿ� ��ü ������ ���
	}

}*/


//�ǽ� 6
/*int findGrade(int score)            // ���� ����ϴ� �Լ�
{
	
		if (score < 0 || score >100)          //������ ��ȿ���� �ƴ��� ����
		{
			printf("�߸��� ����");             
		}

		if (score >= 90 && score <= 100)   //
		{
			printf("�л��� ������ A�Դϴ�");
		}

		else if (score >= 80)
		{
			printf("�л��� ������ B�Դϴ�");

		}

		else if (score >= 70)
		{
			printf("���л��� ������ C�Դϴ�");
		}

		else if (score >= 60)
		{
			printf("���л��� ������ D�Դϴ�");
		}

		else if (score >= 50)
		{
			printf("���л��� ������ E�Դϴ�");
		}

		else
		{
			printf("���л��� ������ F�Դϴ�");
		}


		
	
	return score;
}*/
		
/*{
	int std_id[5];                 //�л� ��ȣ �Է� ��
	char name[5][30];              //�л��� �̸� ��
	int score[5];                  //�л��� ���� �Է� ��
	
	printf("\t\t�̸�: ����ī ġ��ü��\t\n");
	printf("\t\t�й�: 2022218070\t\n\n");
	
	for (int i = 0; i < 5; i++)                        //�л��� ���� �̷��� �ݺ�
	{
		printf("%d������ �л��� �й��� �Է��ϼ���: ", i + 1);
		scanf("%d", &std_id[i]);
		printf("\n�л��� �̸��� �Է��ϼ���: ");
		scanf("%s", &name[i]);
		printf("\n�л��� ������ �Է��ϼ���: ");
		scanf("%d", &score[i]);
		
	}

	printf("\n");

	//�л��� ������ ǥ��
	for (int i = 0; i < 5; i++)
	{
		printf("%d��°�� �л��� �й���: %d\n", i + 1, std_id[i]);
		printf("�л��� �̸���: %s\n", name[i]);
		printf("�л��� ������: %d\n", score[i]);
		findGrade(score[i]);                         //���� ���� �Լ��� ȣ��
		printf("\n\n");
	}
	
}*/

