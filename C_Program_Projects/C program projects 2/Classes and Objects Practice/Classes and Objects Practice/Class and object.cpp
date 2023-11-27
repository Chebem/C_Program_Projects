#include <iostream>
#include<string>
using namespace  std;

//class is aa new data type, creating a new data type
//specification or blueprint for a new data type

/*class Book
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

	cout <<  book1.title <<  endl <<  book1.pages;


	return 0;
}*/

//constructor: is a special functions thats will be called whenever an object of a class is created
	/*class Book
{
	//define the book data type(attributes)
public:
	string title;
	string author;
	int pages;

	//create a constructor with parameter 
	Book(string t, string a, int p)
	{
		title = t;
		author = a;
		pages = p;

	}

};

	int main()
	{
		//object is an actual instance of that class
		//create an object 
		Book book1("Redeeming love", "Francine Rivers", 500);
		

		Book book2("Lord of the Rings", "Tolken", 1000);
	 
		cout << book1.title << endl << book2.author;


		return 0;
	}*/


//Functions

class Student
{
		public:
			string name;
			string major;
			double gpa;

	//create a constructor
			Student(string n, string  m, double  g)
			{
				name = n;
				major = m;
				gpa = g;
			}

			//create a function
			//bool return function, to know if the objects gpa is honours

			bool hasHonors()
			{
				if (gpa >= 3.5)
				{
					return  true;
				}
				else
				{
					return false;
				}

			}
};

int main()
{
	Student student1("Jim", "Business",   2.4);
	Student student2("Pam", "Art", 3.6);

	student1.hasHonors();

	return 0;
}