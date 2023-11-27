#include  <iostream>
#include <cstdlib>
#include<ctime>

using namespace std;

int main()
{
	//seed the random number generator with the current time
	srand(time(nullptr));

	//Ask user for two numbers
	int num1, num2;
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter thesecobd number: ";
	cin >> num2;

	//make sure num1 is smaller than num2
	if (num1 > num2)
	{
		int temp = num1;
		num1 = num2;
		num2 = temp;
	}

	//generate a andom number between num1 and num2
	int random_num = rand() % (num2 - num1 + 1) + num1;

	//print the result
	cout << "A radoum number between" << " " <<  num1 << " "  << "and" << " " <<  num2 <<  " " << "is: " << random_num << endl;

	return 0;

}