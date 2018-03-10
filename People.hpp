/******************************************************************
** Author: 			Artem Slivka
** Date: 			07/19/17
** Description:		People.hpp is the header file for class
**					People. It contains function declarations
**					for the class.
******************************************************************/

#ifndef PEOPLE_HPP
#define PEOPLE_HPP

#include <string>
#include <iostream>
#include "Utility.hpp"
using std::string;
using std::endl;
using std::cout;

class People
{
private:
	string name;
	int personAge;
	string type;

public:
	People();
	People(string p_name);
	People(string p_name, int p_age);
	virtual ~People();
	virtual void do_work(int inputParam);
	void setName(string p_name);
	void setAge();
	void setType(string p_type);
	string getType();
	string getName();
	int getAge();
	virtual void printPersonInfo();
};

#endif 

