#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
	{
		float A;             //�Ǽ��� ����
		printf("���ڸ� �Է��ϼ���: ");
		scanf("%f", &A);           //�Է� �޴� ���� ��
		//��� ���
		printf("1: |%f|\n", A);
		printf("2: |%10.3f|\n", A);
		printf("3: |%-10.3f|\n", A);
		printf("4: |%2.3f|\n", A);
		printf("5: |%+-20.10f|\n", A);
		printf("6: |%+20.10f|\n", A);
		printf("7: |%+-20.10f|\n", -A);
		printf("8: |%+20.10f|\n", +A);

	}
/*{
int X = 8;
if (X >= 3 && X <= 5) {
	printf("The weather is good");
}
else {
	printf("The weather is bad");
}
}*/

/*{
	float temp;
	printf("Put in weather degree: ");
	scanf("%f", &temp);
	if (temp <= 0 || temp >= 30) {
		printf("The weather is bad");
	}
	else {
		printf("The weather is good");
	}

}*/
/*{
int X = 5, Y = 3, A;
A = X++ + Y;
printf("A�� ���� %d\n", A);
A = ++A + --Y;
printf("A�� ���� %d\n", A);
A = -X++ + ++A - --Y;
printf("A�� ���� %d\n", A);



}*/
