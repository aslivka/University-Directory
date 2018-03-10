/******************************************************************
** Author: 			Artem Slivka
** Date: 			07/19/17
** Description:		Student.hpp is the header file for class
**					Student. It contains function declarations
**					for the class.
******************************************************************/

#ifndef STUDENT_HPP
#define STUDENT_HPP

#include "People.hpp"

class Student : public People
{
private:
	double studentGPA;

public:
	Student();
	Student(string p_name);
	Student(string p_name, int p_age, double p_studentGPA);
	void setGPA();
	double getGPA();
	virtual void do_work(int inputParam);
	virtual void printPersonInfo();
};

#endif 

