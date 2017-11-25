#ifndef STUDENTLIST_H_
#define STUDENTLIST_H_
#include "Student.h"
#include <iostream>
using namespace std;


class Studentlist
{
private:
	static const size_t LIST_SIZE = 150; // the maximum items in the list
	Student *items; // items will point to the dynamically allocated array
	size_t numItems; // the number of items currently in the list


public:
	Studentlist();
	~Studentlist();
	Studentlist(Student *studentlist, int list_size); 
	Studentlist(const Studentlist &list);
	void print_all();
	bool check(Student test_student);
	

};
#endif // !STUDENTLIST_H_
