#include "slist.h"

//default constructor
Studentlist::Studentlist() {
	items = new Student [LIST_SIZE];
	numItems = 0;
}

//copy constructor
Studentlist::Studentlist(Student *slist, int list_size) {

	items = new Student[LIST_SIZE];
	for (size_t i{ 0 }; i < list_size; ++i) {
		items[i] = slist[i];
	}
	numItems = list_size;
}

//List constructor
Studentlist::Studentlist(const Studentlist &obj) {
	items = new Student[LIST_SIZE];
	for (size_t i{ 0 }; i < obj.numItems; ++i) {
		items[i] = obj.items[i];
	}
	numItems = obj.numItems;

}
//Destructor
Studentlist::~Studentlist() {
	delete [] items;
	//cout << "Destructor was invoked";
	cout << endl;
}

//Print function that prints all students in the list
void Studentlist::print_all() {
	for (size_t i = 0; i < numItems; ++i) {
		items[i].printStudent();
		cout << endl;
	}
}

//Check function that checks if student exists in the list
bool Studentlist::check(Student test_student) {
	for (size_t i = 0; i < numItems; ++i) {
		if (test_student.getID() == items[i].getID() || (test_student.getFname() == items[i].getFname() && test_student.getLname() == items[i].getLname())) {
			cout << "The student exists in the list" << endl;
			return true;
		}
	}
	return false;
	cout << "Student not found" << endl;
}