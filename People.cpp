/******************************************************************
** Author: 			Artem Slivka
** Date: 		    07/19/17
** Description:		People.cpp is the function implementation file
**					for class People. It allows a user to set the
**					general parameters for person only, like name.
******************************************************************/

#include "People.hpp"		//Link to class header

/*********************************************************************
** Description:		This is the default constructor for People class.
*********************************************************************/
People::People()
{
	setName("");
	setAge();
	setType("person");
}

/*********************************************************************
** Description:		This constructor sets the name for the
**					People object, as entered by user. Age is random.
*********************************************************************/
People::People(string p_name)
{
	setName(p_name);
	setAge();
	setType("person");
}

/*********************************************************************
** Description:		This constructor sets the name and age for the
**					People object, as entered by user. 
*********************************************************************/
People::People(string p_name, int p_age)
{
	setName(p_name);
	personAge = p_age;
	setType("person");
}

/*********************************************************************
** Description:		This is the destructor for class People.
*********************************************************************/
People:: ~People() 
{

}


/*********************************************************************
** Description:		This function makes a person do a reasonable,
**					random amount of work. Prints the final result.
*********************************************************************/
void People::do_work(int inputParam)
{
	int hours = simpleRand(0,10) * inputParam;
	cout << getName() << " did " << hours << " hours of work." << endl;

}

/*********************************************************************
** Description:		This function sets the name of the person.
**
*********************************************************************/
void People::setName(string p_name)
{
	name = p_name;
}

/*********************************************************************
** Description:		This function randomly sets the age of the person.
**
*********************************************************************/
void People::setAge()
{
	personAge = simpleRand(18, 50);
}

/*********************************************************************
** Description:		This function sets the type of the person:
**					person, instructor, student
*********************************************************************/
void People::setType(string p_type)
{
	type = p_type;
}

/*********************************************************************
** Description:		This function returns the type of the person:
**					person, instructor, student
*********************************************************************/
string People::getType()
{
	return type;
}


/*********************************************************************
** Description:		This function returns the name of the person.
**					
*********************************************************************/
string People::getName()
{
	return name;
}

/*********************************************************************
** Description:		This function returns the age of the person.
**
*********************************************************************/
int People::getAge()
{
	return personAge;
}

/*********************************************************************
** Description:		This function prints general info for the People
**					object/person.
*********************************************************************/
void People::printPersonInfo()
{
	cout << "===Person's info===" << endl;
	
}






