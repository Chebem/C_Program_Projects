#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//예시2 함수 (call by value) 
void swap(int a, int b)       //create a called function to swap values 'a' and 'b' in the main function       
{
	int temp;                   //assign the variable that will act as the swapping function 
	temp = a;
	a = b;
	b = temp;
}

//예시 2 함수 (call by reference)
void swap(int *a, int *b)         //create a function initalizing pointer variables to 'a' and 'b' in main function       
{
	int temp;                     //assign the variable that will act as the swapping function 
	temp = *a;
	*a = *b;
	*b = temp;
}


//실습 예시 7 (function to Change the array value )
void change_array(int arr[], int num, int value)                  
{

	arr[num] = value;                //equate an element of the array to the value you want to change
}


//실습 예시 7(function to loop through the array and show array)
/*void show_array(int arr[], int size)                //define and intialize the variables to be called as arguments in main function
{
	for (int i = 0; i < size; i++)                   //to loop through the array
	{
		printf("%d", arr[i]);                      //output the elements by looping through the array
		if (i != size - 1)                       // give condition to output comma sign seperating the values
			printf(", "); 
	}
}*/

//실습 2 함수(2차 배열 이용하여 배열의 값들 바꾼다)
void show_array(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d", arr[i]);
		if (i != size - 1)
			printf(", ");
	}
	
}


//실습 2 함수
void swap_arrayElement(int arr[])
{
	
	int temp;                     //initialize a variable to be used as for swapping
	temp = *(arr + 2);            //using pointer as call to reference of elements in the array
	*(arr + 2) = *(arr + 4);      //swap the elements 
	*(arr + 4) = temp;

}


int main()
//12주차 (포인터) 수업 실습 예시  1
/*{

	printf("\t\t이름: 추쿠카 치네체벰\n \t\t학번: 2022218070\n");
	int a = 8;                                         //initialize and declare a variable 'a'
	int * pA = &a;                                    // initialize a pointer variable pointing to 'a'

	printf("변수\"a\"의 값은: %d\n", a);                    //value of a
	printf("변수\"pA\"의 저장하고 있는 값은: %d\n", *pA);    //dereference the pointer variable, the value of a is outputed
	printf("변수\"pA\"의 값은: %p\n", pA);                  //the value at pointer variable
	printf("변수\"a\"의 주소는: %p\n", &a);                 //address at a
	printf("변수\"pA\"의 주소는: %p", &pA);                 //address at pA(pointer) variable

}*/


//실습 예시 2 (call by value)
/*{
	int a = 3, b = 5;                                         //initialize and define vaiables 'a' and 'b'
	printf("a = %d, b = %d\n", a, b);                          // output the values in 'a' and 'b'
	swap(a, b);                                               // call the function with arguments a and b
	printf("a = %d, b = %d", a, b);                          //output the value after calling the function

}*/


//실습 예시 3 (call by reference)
/*{
	int a = 3, b = 5;                                       //initialize and define vaiables 'a' and 'b'
	printf("a = %d, b = %d\n", a, b);                       // output the values in 'a' and 'b'
	swap(&a, &b);                                           // call the function  referencing to the pointer variables 'a' and 'b' in the called function
	printf("a = %d, b = %d", a, b);                        //output the value after calling the function
}*/


//실습 예시 4 (using pointers  to display array numbers
/*{
	int a[5] = { 10, 20 ,30, 40, 50 };

	int *pA = a;
	printf("%d\n", *pA);        //dereferencing the pointer variable to output the value stored in it
	printf("%d\n", *++pA);      //increasing before assigning the element (prints a[1])
	printf("%d\n", *pA++);      //assigns before increasing the element(prints a[2])
	printf("%d\n", *(pA + 2));  //displays a[4]

}*/


//실습 예시 4 (pointers and array)
/*{
	int a[5] = { 10, 20, 30, 40, 50 };                                   //initialize and define array 'a' with 5 variables

	int *pA = a;                                                        //initialize pointer variable pointing to the array 'a'

	printf("a[0]= %d , pA[0] = %d\n", a[0], pA[0]);                     //output the variables in 'a' and 'pA'
	printf("*(a + i)= %d, *(pa + i)= %d", *(a + 3), *(pA + 3));         //output the variable using pointers to navigate the variables in the array
}*/


//실습 예시 5
/*{
	int a[5] = { 10, 20, 30, 40, 50 };
	int *pA = a;                       //	INITIALIZE A POINTER VARIABLE POINTING TO 'a'

	printf("%p\n", pA);        //OUTPUT THE ADDRESS STORED IN POINTER VARIABLE
	printf("%p\n", a);         //OUTPUT THE ADDRESS STORED IN 'a' VARIABLE
	printf("%p\n", pA + 1);    //OUTPUT THE ADDRESS STORED IN a[1]
	printf("%p\n", ++pA);      //OUTPUT THE ADDRESS STORED IN a[1]
	printf("%p\n", a + 1);     //OUTPUT THE ADDRESS STORED IN a[1]
}*/


//실습 예시 6 (name of array is the pointer)
/*{
	int a[5] = { 1, 2, 3, 4, 5 };
	printf("세번째 값에 대응하는 주소는: %p\n네번째 값에 대응하는 주소는: %p", &a[2], &a[3]);          //output the address stored at array[2] and array[3] making use of pointer to the elements in the array
	int *pA = a;                                                                                   //iitialize a pointer variable pointing to integer a
	printf("\n세번째 값에 대응하는 주소는: %p\n네번째 값에 대응하는 주소는: %p", &pA[2], &pA[3]);      //output the address in the pointer variable pointing to  the array 'a[2]' and 'a[3]' which will be the address stored in 'a'

}*/


//실습 예시 7
/*{
	int arr[] = { 1, 2, 3, 4, 5 };                   //intialize the array variable and assign elemts
	int size = sizeof(arr) / sizeof(arr[0]);         //in an unassigned array with elements  to get the size of the arr
	printf("변겅 전: ");
	show_array(arr, size);
	change_array(arr, 2, 5);                        //call the 'change_array' function
	printf("\n변경 후: ");
	show_array(arr, size);                         //output the result after changing the  elements in the array


}*/


//12주차 실습 1 (call by value)
/*{
	printf("\t\t이름: 추쿠카 치네체벰\n \t\t학번: 2022218070\n");

	int a = 3, b = 5;                                         //initialize and define vaiables 'a' and 'b'


	printf("a = %d, b = %d", a, b);                           // output the values in 'a' and 'b'
	printf("\na의 주소는 = %p, b의 주소는 = %p\n", &a, &b);    //output the address in 'a' and 'b' before the swap
	swap(a, b);                                               // call the function with arguments a and b
	printf("a = %d, b = %d", a, b);                          //output the value after calling the function
	printf("\na의 주소는 = %p, b의 주소는= %p", &a, &b);       //output the address in 'a' and 'b' after swapping the values

}*/


//실습 1(call by reference)
/*{

	printf("\t\t이름: 추쿠카 치네체벰\n \t\t학번: 2022218070\n");

	int a = 3, b = 5;                                         //initialize and define vaiables 'a' and 'b'

	printf("a = %d, b = %d", a, b);                           // output the values in 'a' and 'b'
	printf("\na의 주소는 = %p, b의 주소는 = %p\n", &a, &b);    //output the address in 'a' and 'b' before the swap
	swap(&a, &b);                                             // call the function  referencing to the pointer variables 'a' and 'b' in the called function
	printf("a = %d, b = %d", a, b);                          //output the value after calling the function
	printf("\na의 주소는 = %p, b의 주소는= %p", &*&a, &*&b);       //output the address in 'a' and 'b' after swapping the values
}*/

//실습 2(using 2차 배열 (2 dimensional array) to change the values 
{
	int arr[]=  {1, 2, 3, 4, 5};                    //unintialized array and assign elements 
	int size = sizeof(arr) / sizeof(arr[0]);        //to determine the size of array
	printf("변겅 전: ");                            //displays the array before swapping
	show_array(arr, size);                         //call the function as arument to display array
	swap_arrayElement(arr);                        //call the function as argument to swap the elements
	printf("\n변겅 후: ");                            
	show_array(arr, size);                         //call the function to display the swaapped elements

}
