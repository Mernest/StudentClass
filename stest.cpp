#include "Student.h"
#include <iostream>
using namespace std;

int stest_main() {
	Student obj1; // initializing class with default constructor
	Student obj2("hello", "world", 10); //this constructor sets first name, last name and ID
	Student obj3(obj2); //this constructor initializes the class by using another object's information
	Student obj4 = obj2; //operator overloading to copy an object's information to another

	obj1.printStudent(); // printing information for default case
	cout << endl;
	obj2.printStudent(); // printing information provided by user
	cout << endl;
	obj3.printStudent(); // printing the copied constructor
	cout << endl;
	obj4.printStudent(); // printing obj4
	cout << endl;
	return 0;
}