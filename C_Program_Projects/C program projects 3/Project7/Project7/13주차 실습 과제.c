#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void show_array(int (*arr)[6], int row, int col)     //function to display all elements in the array
{
	for (int i = 0; i < row; i++)   // for loop to loop through all the elemnts in the array
	{
		for (int j = 0; j < col; j++) 
		{
			printf("%d", arr[i][j]);   //display all the elemts( display result);
			if (j != col - 1)          //to seperate the elements displayed with a comma(condition)
			{
				printf(" ,");
			}
			
		}
		printf("\n");
	}
}
void sum_1(int(*arr)[6], float row, float col)     //function to calculate the average and summation of every column in the array
{
	int X;
	for (int j = 0; j < col; j++)               //loop throught the array to find the summation of column
	{
		X = 0; 
		for (int i= 0; i < row; i++)
		{
			X += arr[i][j];
		}
		float avg = X / row;	             //formula to find the average of each column.
		printf("%d번째 행의 합: %d\t\t 평균: %.3f\n", j + 1, X, avg);    //print and display the result
	}
	printf("\n");
}

void sum_2(int(*arr)[6], float row, float col)    //function to  caalulate the sum and average of each row
{
	int X;
	double avg;                      // intialize a double variable for calculating the average
	for (int i = 0; i < row; i++)    // looping through the row, to find the summation of evrey row
	{
		X = 0;
		for (int j = 0; j < col; j++)      
		{
			X += arr[i][j];
			
		}
		avg = X / col;        //formula for the average of each row
		
		printf("%d번째 열의 합: %d\t\t 평균: %0.3lf\n", i + 1, X, avg);    //display the result
	}
	
	printf("\n");

}

void whole_sum(int(*arr)[6], float row, float col)   //function to calculate the whole elements in the array
{
	int X;                // intialize a variable used for the summation
	X = 0;
	float avg;
	for (int i = 0; i < row; i++)      //using reptition to loop through the array and calculate the sum of  array
	{
		for (int j = 0; j < col; j++)
		{
			X += arr[i][j];
			
		}

		avg= X / (row * col);               //formula for the average of the whole array
	}		
	printf("전채 함: %d\n 전체 평균: %f", X, avg);    //display the sum and average of the whole array

}

int main()              //main function
{
	int	A[5][6] = { { 5, 7, 8, 12, 15, 3}, {21, 18, 19, 6, 1, 24},                                    //declare and intialize the array with elements
					{11, 6, 5, 3, 10, 17}, {1, 8, 13, 18, 4, 22}, {4, 2, 25, 21, 12, 6} };

	int col = sizeof(A[0]) / sizeof(int);     // to find the size of the vertical  in the array
	int row = sizeof(A)/ sizeof(int) / col;     // to find the size of rows in the array


	printf("\t\t\t이름: 추쿠카 치네체벰\n\t\t\t학번: 2022218070\n\n");
	printf("배열의 가로는: %d\n", row);             //display the size of row
	printf("배열의 세로는: %d", col);                //display the size of column
	printf("\n\n");
	show_array(A, row, col);            //display the entire array with elements 
	printf("\n");
	sum_2(A, row, col);                    //call function for the summation and display of elements in each row 
	printf("\n");
	sum_1(A, row, col);                     // call function with arguments for the summation and display of eaach elements percolumn
	whole_sum(A, row, col);                 // call function with arguments to display the summation and aversge of the whole array
	
	



}
