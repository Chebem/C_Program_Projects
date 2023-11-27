#include <iostream>
#include<string.h>

using namespace  std;

//class is aa new data type, creating a new data type
//specification or blueprint for a new data type

class Book
{
	//define the book data type(attributes)
		public:
			string title;
			string author;
			int pages;

};

int main()
{
	//object is an actual instance of that class
	//create an object 
	Book book1;
	book1.title = "Redeeming Love";
	book1.author = "Francince Rivers";
	book1.pages = 500;

	cout << book1.pages << "TITLE: " <<  book1.title; 


	return 0;
}
