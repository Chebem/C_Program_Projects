#include <iostream>
#include <iomanip>
#include<string>
using namespace std;

void print_reciept(string coffee_type,  int quantity,  int price)
{
		cout << "\n---------------------------------------------\n";
		cout << "                 COFFEE ORDER                     \n";
		cout << "\n---------------------------------------------\n";
		cout << "Type:  " <<  coffee_type << endl;
		cout << "Quantity: " << quantity << endl;
		cout << "Price: " << price << endl;
		cout << "----------------------------------------------\n";
}

int main()
{
	//declare variable 
	int choice, quantity;
	int price, total_sales = 0;
	string coffee_type;

	//Display menu
	cout << "*******************Menu************************\n";
	cout <<"--------------------------1. Espresso - 2500-----------------------------\n";
	cout << "--------------------------2. Latte - 4000----------------------------------\n";
	cout << "--------------------------3. Americano - 2000---------------------------\n";
	cout << "--------------------------4. Cappuccino - 3000---------------------------\n";
	cout << "--------------------------5. Exit-----------------------------------------------\n";
	cout << "**************************************************\n";
	while (true)
	{
		cout << "Enter your choice: ";
		cin >> choice;

		if (choice == 5)
		{
			break;
		}
		cout << "Enter quantity: ";
		cin >> quantity;

		//Calculate price basedon user input
		switch (choice)
		{
		case 1:
			coffee_type = "Espresso";
			price = 2500 * quantity;
			break;
		case 2:
			coffee_type = "Latte";
			price = 4000 * quantity;
			break;
		case 3:
			coffee_type = "Americano";
			price = 2000 * quantity;
			break;
		case 4:
			coffee_type = "Cappuccino";
			price = 3000 * quantity;
			break;
		}
		//print reciept
		print_reciept(coffee_type, quantity, price);

		//update total sales
		total_sales += price;
	}

	//print total _sales
	cout << "\nTotal sales:  $" << total_sales << endl;

	return 0;

}