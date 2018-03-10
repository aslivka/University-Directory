/******************************************************************
** Author: 			Artem Slivka
** Date: 		    07/19/17
** Description:		University.cpp is the function implementation 
**					file for class University. It allows a user to 
**					display	university info: buildings, people, etc.
******************************************************************/

#include "University.hpp"		//Link to class header

/*********************************************************************
** Description:		This is the default constructor for University
**					class.
*********************************************************************/
University::University()
{
	name = "Oregon State University";
	allocateData();
}

/*********************************************************************
** Description:		This is the default destructor for University
**					class.
*********************************************************************/
University::~University()
{
	for (int i = 0; i < numPeople; i++)
	{
		delete peopleList[i];
		peopleList[i] = 0;
	}

	for (int i = 0; i < numBuildings; i++)
	{
		delete buildingList[i];
		buildingList[i] = 0;
	}
	peopleList.clear();
	buildingList.clear();

}

/*********************************************************************
** Description:		This function allocates all buildings and people
**					to university's vectors.
*********************************************************************/
void University::allocateData()
{
	//Building(string p_name, double p_size, string p_address);
	//Allocating buildings
	buildingList.push_back(new Building("Adams Hall", 11168, "606 SW 15TH ST, COVALLIS, OR 97331"));
	buildingList.push_back(new Building("Benton Hall", 25806, "1650 SW PIONEER PL, COVALLIS, OR 97331"));
	numBuildings = static_cast<int>(buildingList.size());

	//Allocating people
	//Student(string p_name);
	peopleList.push_back(new Instructor("Benjamin Brewster"));
	peopleList.push_back(new Student("Artem Slivka"));
	peopleList.push_back(new Student("Michael Johnson"));
	numPeople = static_cast<int>(peopleList.size());

}

/*********************************************************************
** Description:		This function prints all of the university's 
**					building info.
*********************************************************************/
void University::printBuildInfo()
{
	cout << "University name: " << name << endl;
	numBuildings = static_cast<int>(buildingList.size());
	cout << "===Printing information of buildings in university" << endl;

	for (int i = 0; i < numBuildings; i++)
	{
		cout << "Building: " << i + 1 << endl;
		buildingList[i]->printBuildInfo();
	}
}

/*********************************************************************
** Description:		This function prints all of the university's
**					people info, instructors and students.
*********************************************************************/
void University::printPeopleInfo()
{
	cout << "University name: " << name << endl;
	numPeople = static_cast<int>(peopleList.size());
	cout << "===Printing information of everybody in university" << endl;

	for (int i = 0; i < numPeople; i++)
	{
		cout << "Person: " << i + 1 << endl;
		peopleList[i]->printPersonInfo();
	}
}

/*********************************************************************
** Description:		This function selects a worker based on user's 
**					input, then makes the worker do work.
*********************************************************************/
void University::selectWorker()
{
	//Printing list of people for reference
	printPeopleInfo();
	int personChoice;
	int weekDays;

	//Selecting a worker
	cout << "Select a person to do work. (Integer from 1 to " << numPeople << ")" << endl;
	personChoice = getIntegerRange(1,numPeople);

	cout << "Person " << personChoice << " was selected" << endl;

	cout << "Enter how many days the person will work. (Integer from 1 to 5)" << endl;
	weekDays = getIntegerRange(1, 5);

	//Printing the results of work for the person
	peopleList[personChoice - 1]->do_work(weekDays);
}

/*********************************************************************
** Description:		This function adds a new person(instructor or
**					student) to university's list.
*********************************************************************/
void University::addPerson()
{
	//Selecting a worker
	char personType;
	string personName;
	int personAge;
	bool duplicateName;
	double studentGPA;
	double rating;

	//Selecting type of person
	do
	{
		cout << "Select the type of person to add." << endl;
		cout << "Character s for student, i for instructor: " << endl;
		personType = getAChar();
	} while ((tolower(personType) != 's') && (tolower(personType) != 'i'));
	
	//Entering person's name
	do
	{	cout << "Enter person's name." << endl;
		getline(cin, personName);
		duplicateName = searchList(personName);
	} while (duplicateName == true);

	//Entering person's age
	cout << "Enter person's age (From 18-50)" << endl;
	personAge = getIntegerRange(18, 50);

	//Creating appropriate objects based on person type
	if (personType == 's')
	{
		cout << "Enter student's GPA (From 0.0-4.0)" << endl;
		studentGPA = getDoubleRange(0.0, 4.0);
		cout << endl;
		cout << "Adding new student." << endl;
		peopleList.push_back(new Student(personName, personAge, studentGPA));
	}

	else if (personType == 'i')
	{
		cout << "Enter instructors's rating (From 0.0-5.0)" << endl;
		rating = getDoubleRange(0.0, 5.0);
		cout << endl;
		cout << "Adding new instructor." << endl;
		peopleList.push_back(new Instructor(personName, personAge, rating));
	}

	numPeople = static_cast<int>(peopleList.size());

	//Displaying the updated list of people after adding person
	cout << "Showing updated list now." << endl;
	printPeopleInfo();
}

/*********************************************************************
** Description:		This function searches the vecotr for a
**					duplicate element compared to the object passed in.
**					If found a duplicate element, it will return the
**					true. If not found, it will return false.
*********************************************************************/
bool University::searchList(const string p_name)
{
	bool duplicateLocation = false;
	for (int i = 0; i < numPeople; i++)
	{
		if (peopleList[i]->getName() == p_name)
		{
			duplicateLocation = true;
		}
	}
	return duplicateLocation;
}

/*********************************************************************
** Description:		This function supervises the menu operation for the 
**					class and generally controls the program's flow.
*********************************************************************/
void University::start()
{
	//Adding menu options
	Menu menu1;
	menu1.addOption("Prints information of all the buildings");
	menu1.addOption("Prints information of everybody at the university");
	menu1.addOption("Choose a person to do work");
	menu1.addOption("Add new person to list");
	menu1.addOption("Quit program");

	do
	{
		//Printing menu options
		menu1.printMenu();

		//Selecting menu option
		cout << "Enter menu option (as integer)." << endl;
		int menuChoice = getIntegerRange(1, 5);

		//Set/select a menu option
		menu1.setOption(menuChoice);

		switch (menu1.getOption())
		{
		case 1: {
				printBuildInfo();
				break;
				}
		case 2: {
				printPeopleInfo();
				break;
				}
		case 3: {
				selectWorker();
				break;
				}
		case 4: {
				addPerson();
				break;
				}

		}
	} while (menu1.getOption() != 5);
	cout << "Quitting program..." << endl;
	
}