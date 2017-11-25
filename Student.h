/*
* student.h
*
*  Created on: Jan 15, 2015
*      Author: liuyan
*/

#ifndef STUDENT_H_
#define STUDENT_H_


class Student
{
public:

	Student(); // default constructor
	Student(char*, char*, int); //Constructor
	Student(const Student &); //Copy Constructor
	~Student(); //Destructor

	void printStudent() const;
	void operator=(const Student& stud); //overloading operator =, again using reference and it is const
										 // as the assign operator does not change object stud's data members

	//these get functions are used for the check functions in part 2
	char* getFname();
	char* getLname();
	int getID();

private:
	char* fname;
	char* lname;
	int id;
};

#endif /* STUDENT_H_ */




