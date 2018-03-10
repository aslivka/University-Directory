/******************************************************************
** Author: 			Artem Slivka
** Date: 			07/19/17
** Description:		University.hpp is the header file for class
**					University. It contains function declarations
**					for the class.
******************************************************************/

#ifndef UNIVERSITY_HPP
#define UNIVERSITY_HPP

#include "Building.hpp"
#include "Student.hpp"
#include "Instructor.hpp"
#include "Menu.hpp"
#include "Utility.hpp"

class University
{
private:
	string name;
	int numBuildings;
	int numPeople;
	vector<People*> peopleList;
	vector<Building*> buildingList;

public:
	University();
	~University();
	void allocateData();
	void printBuildInfo();
	void printPeopleInfo();
	void selectWorker();
	void addPerson();
	bool searchList(const string p_name);
	void start();
};

#endif 

