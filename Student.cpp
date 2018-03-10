/******************************************************************
** Author: 			Artem Slivka
** Date: 		    07/19/17
** Description:		Student.cpp is the function implementation file
**					for class Student. It allows a user to set the
**					student specific parameters like GPA.
******************************************************************/

#include "Student.hpp"		//Link to class header

/*********************************************************************
** Description:		This is the default constructor for Student class.
*********************************************************************/
Student::Student() : People()
{
	setGPA();
	setType("student");
}

/*********************************************************************
** Description:		This constructor sets name for the
**					Student object, as entered by user.
*********************************************************************/
Student::Student(string p_name) : People(p_name)
{
	setGPA();
	setType("student");
}

/*********************************************************************
** Description:		This constructor sets all parameters for the
**					Student object, as entered by user.
*********************************************************************/
Student::Student(string p_name, int p_age, double p_studentGPA ) : People(p_name, p_age)
{
	studentGPA = p_studentGPA;
	setType("student");
}

/*********************************************************************
** Description:		This function set GPA value for student randomly
**					from 0.0-4.0.
*********************************************************************/
void Student::setGPA()
{
	studentGPA = static_cast<double>(simpleRand(0,40)) / 10;
}

/*********************************************************************
** Description:		This function returns GPA value for student 
*********************************************************************/
double Student::getGPA()
{
	return studentGPA;
}

/*********************************************************************
** Description:		This function makes a student do a reasonable,
**					random amount of homework. It also prints the 
**					final result.
*********************************************************************/
void Student::do_work(int inputParam)
{
	int hours = simpleRand(0, 10) * inputParam;
	cout << getName() << " did " << hours << " hours of homework." << endl;
}

/*********************************************************************
** Description:		This function prints general info for the student
**					object.
*********************************************************************/
void Student::printPersonInfo()
{
	cout << "Type: " << getType() << endl;
	cout << "Name: " << getName() << endl;
	cout << "Age: " << getAge() << endl;
	cout << "GPA: " << getGPA() << endl << endl;
}






