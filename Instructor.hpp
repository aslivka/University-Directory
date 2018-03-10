/******************************************************************
** Author: 			Artem Slivka
** Date: 			07/19/17
** Description:		Instructor.hpp is the header file for class
**					Instructor. It contains function declarations
**					for the class.
******************************************************************/

#ifndef INSTRUCTOR_HPP
#define INSTRUCTOR_HPP

#include "People.hpp"

class Instructor : public People
{
private:
	double rating;

public:
	Instructor();
	Instructor(string p_name);
	Instructor(string p_name, int p_age, double p_rating);
	void setRating();
	double getRating();
	virtual void do_work(int inputParam);
	virtual void printPersonInfo();
};

#endif 

