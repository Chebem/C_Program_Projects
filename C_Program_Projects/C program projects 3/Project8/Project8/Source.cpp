#define _CRT_SECURE_N0_WARNING
#include<stdio.h>
/*void display_menu();
int get_number();

int selected_num(int num, int pw);
int set_password();
int match_pw(int pw);

int main()
{
	int num;
	int pw = 1234;
	display_menu();
	while (1)
	{
		num = get_number();
		if (num == 3)
		{
			printf("�����մϴ�.\n");
			break;
		}
		else
		{
			pw = selected_num(num, pw);
		}
	}
}

void display_menu()
{
	printf("\t\t1.) ������ ����\n\t\t2.) ��� ����\n\t\t 3.) ����\n");
}

int get_number()
{
	int num;
	printf("��ȣ�� �Է��ϼ���: ");
	scanf_s("%d", &num);
	if (num > 3 || num < 1)
	{
		printf("�߸��� ��ȣ�� �Է��Ͽ����ϴ�.\n");
		get_number();
	}
	else
	{
		return num;
	}
}

int selected_num(int num, int pw)
{
	switch (num)
	{
	case 1:
		pw = set_password();
		printf("���� �޴��� ���ϴ�\n");
		break;
	case 2:
		match_pw(pw);
		printf("���� �޴��� ���ϴ�\n");
		break;
	case 3:
		break;
	}
	return pw;
}

int set_password()
{
	int pw = 1234;

	char name[50];
	char id[50];

	printf("�̸��� �Է��ϼ���: ");
	scanf_s("%s", &name);
	printf("���̵带 �Է��ϼ���: ");
	scanf_s("%s", &id);
	printf("��й�ȣ�� �Է��ϼ���: ");
	scanf_s("%d", &pw);
	printf("��й�ȣ�� �����Ǿ����ϴ�.\n");

	return pw;
}

int match_pw(int pw)
{
	int input_pw;
	char input_name[50];
	char input_id[50];
	printf("�̸��� �Է��ϼ���: ");
	scanf_s("%s", &input_name);
	printf("���̵带  �Է��ϼ���: ");
	scanf_s("%s", &input_id);
	printf("��й�ȣ�� �Է��ϼ���: ");
	scanf_s("%d", &input_pw);


	if (pw == input_pw )
	{
		printf("�ùٸ� ��й�ȣ�� �Է��Ͽ����ϴ�.\n");
	}
	else
	{
		printf("�߸��� ��й�ȣ�� �Է��Ͽ����ϴ�. �ٽ� �Է��ϼ���.\n");
		match_pw(pw);
	}
	return pw;
}*/

/*void show_array(int(*arr)[3], int row, int col)
{
	for (int i = 0; i < row; i++)   // for loop to loop through all the elemnts in the array
	{
		for (int j = 0; j < col; j++)
		{
			printf("%d", arr[i][j]);   //display all the elemts( display result);
			if (i!= row - 1)          //to seperate the elements displayed with a comma(condition)
			{
				printf(" ,");

			}
			printf("\n");
		}
	}
}*/

int main()
{


	int Arr[][3] = { {1, 2, 3,}, {4, 5, 6}, {7, 8, 9} };


	int col = sizeof(Arr[0]) / sizeof(int);     // to find the size of the vertical  in the array
	int row = sizeof(Arr) / sizeof(int) / col;     // to find the size of rows in the array

	for (int i = 0; i < col; i++)   // for loop to loop through all the elemnts in the array
	{
		for (int j = 0; j < row; j++)
		{
			printf("%d", Arr[j][i]);   //display all the elemts( display result);

		}	
		printf("\n");
	}

}




/*int my_func(int X, int a, int b, int c)
{
	
	 *pow(X , 2) + b * X + c;
	return a
}

int main()
{

}*/

/*void swap(int X, int Y)       //create a called function to swap values 'a' and 'b' in the main function       
{
	int temp;                   //assign the variable that will act as the swapping function 
	temp = X;
	X = Y;
	Y = temp;
	printf("X= %d, Y = %d\n", X, Y);

}*/

/*void myfunc(int*X)
{
	*X = *X *(*X - 1);
}*/

//int main()
/*{
	int a = 3, b = 5;                                         //initialize and define vaiables 'a' and 'b'
	printf("a = %d, b = %d\n", a, b);                          // output the values in 'a' and 'b'
	swap(a, b);                                               // call the function with arguments a and b
	printf("a = %d, b = %d", a, b);                          //output the value after calling the function

}*/
/*{
	int A = 4;
	int *pA = &A;
	myfunc(pA);
	printf("%d\n", A);
	*pA = 7;
	myfunc(pA);
	printf("%d\n", A);



}*/