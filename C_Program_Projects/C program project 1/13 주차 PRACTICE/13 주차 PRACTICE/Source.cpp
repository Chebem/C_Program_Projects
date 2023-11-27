#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>


//pointers and functions
/*int SumofElements(int A[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += A[i];
	}
	return sum;
}*/


//pointers and funcions
/*void Double(int A[], int size)    //int A[] - the same as int* A

{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		A[i] = 2 * A[i];
	}
}*/


//character arrays and pointers
void Print(char *C)
{
	C[0] = 'A';
	while (*C != '\0')
	{
		printf("%c", *C);
		C++;
	}
	printf("\n");
}


int main()

//pointers and functions
/*{
	int A[] = { 1, 2, 3, 4, 5 };

	int size = sizeof(A) / sizeof(A[0]);
	int total = SumofElements(A, size);

	printf("SumofElements= %d\n", total);

}*/

//pointers and functions
/*{
	int A[] = { 1, 2, 3, 4, 5 };

	int size = sizeof(A) / sizeof(A[0]);      // to know the size of the array
	Double(A, size);                       //calling the function as argument to double elements in aray
	for (int i = 0; i < size; i++)
	{
		printf("%d ", A[i]);
	}

}*/


//pointers and characters arrays
/*{
	char C[20] = "Hello";
	Print(C);
}*/


//pointers and 2d array
/*{
	int A[2][5] = { {1,2, 3, 4, 5,}, {1, 3, 5, 7, 9} };
	int (*pa)[5] = A;

	printf("%d", *(*A));

}*/

/*{
	int a[] = {5, 16, 7, 89, 45, 32, 23, 10};
	int *pA = a;
	printf("%d\n", *(pA++));
	printf("%d\n", *(++pA));
	printf("%d\n", *(pA + 4));
	printf("%d\n", *(pA--));
	printf("%d\n", *(pA + 3));
	printf("%d\n", *(--pA));

}*/

