/*
* student.cpp
*
*  Created on: Jan 15, 2015
*      Author: liuyan
*/
#include <iostream>
#include <string>
#include "student.h"
 
using namespace std;

// Constructor
//Student::Student()
//{
//	id = -1000;
//	fname = new char[10];
//	lname = new char[10];
//	cout << "default constructor was called" <<endl;
//}

Student::Student() {
	id = 0;
	fname = new char[3];
	lname = new char[3];
	strcpy(fname, "na");
	strcpy(lname, "na");
// cout << "Student class default constructor was called" << endl;

}

Student::Student(char* pF, char* pL, int idnum)
{
	id = idnum;
	fname = new char[strlen(pF) + 1];
	lname = new char[strlen(pL) + 1];
	strcpy(fname, pF);
	strcpy(lname, pL);

//	cout << "Student class parameterized constructor was called" << endl;
}

// Copy Constructor
Student::Student(const Student & stud)
{
	id = stud.id;
	fname = new char[strlen(stud.fname) + 1];
	lname = new char[strlen(stud.lname) + 1];
	strcpy(fname, stud.fname);
	strcpy(lname, stud.lname);

//	cout << "Student class copy constructor was called" << endl;
}

//Destructor
Student::~Student()
{
	// Clean up memory
	delete[] fname;
	delete[] lname;
	//cout << "Student class destructor was called" << endl;

}

void Student::printStudent() const {
	cout << "id: " << id << "\t name: " << fname << "," << lname << endl;
}

void Student::operator=(const Student& stud)
{
	id = stud.id;
	fname = new char[strlen(stud.fname) + 1];
	lname = new char[strlen(stud.lname) + 1];
	strcpy(fname, stud.fname);
	strcpy(lname, stud.lname);
//	cout << "assign operator was called" << endl;

	return;
}

char* Student::getFname() {
	return fname;
}

char* Student::getLname() {
	return lname;
}

int Student::getID() {
	return id;
}


