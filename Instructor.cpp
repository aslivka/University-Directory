/******************************************************************
** Author: 			Artem Slivka
** Date: 		    07/19/17
** Description:		Instructor.cpp is the function implementation file
**					for class Instructor. It allows a user to set the
**					instructor specific parameters like rating.
******************************************************************/

#include "Instructor.hpp"		//Link to class header

/*********************************************************************
** Description:		This is the default constructor for Instructor
*					class.
*********************************************************************/
Instructor::Instructor() : People()
{
	setRating();
	setType("instructor");
}

/*********************************************************************
** Description:		This constructor sets name for the
**					instructor object, as entered by user.
*********************************************************************/
Instructor::Instructor(string p_name) : People(p_name)
{
	setRating();
	setType("instructor");
}


/*********************************************************************
** Description:		This constructor sets all parameters for the
**					instructor object, as entered by user.
*********************************************************************/
Instructor::Instructor(string p_name, int p_age, double p_rating) : People(p_name, p_age)
{
	rating = p_rating;
	setType("instructor");
}

/*********************************************************************
** Description:		This function set rating value for instructor
**					randomly from 0.0-5.0.
*********************************************************************/
void Instructor::setRating()
{
	rating = static_cast<double>(simpleRand(0, 50)) / 10; 
}

/*********************************************************************
** Description:		This function returns rating value for instructor
*********************************************************************/
double Instructor::getRating()
{
	return rating;
}

/*********************************************************************
** Description:		This function makes an instructor do a reasonable,
**					random amount of grading work. It also prints the
**					final result.
*********************************************************************/
void Instructor::do_work(int inputParam)
{
	int hours = simpleRand(0, 10) * inputParam;
	cout << "Instructor " << getName() << " graded papers for ";
	cout << hours << " hours." << endl;
}

/*********************************************************************
** Description:		This function prints general info for the 
**					instructor object.
*********************************************************************/
void Instructor::printPersonInfo()
{
	cout << "Type: " << getType() << endl;
	cout << "Name: " << getName() << endl;
	cout << "Age: " << getAge() << endl;
	cout << "Rating: " << getRating() << endl << endl;
}






