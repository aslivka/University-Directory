/*********************************************************************
** Program name:		Lab4
** Author:				Artem Slivka
** Date:				7/19/17
** Description:			This program creates a basic information 
**						system for Oregon State University. It mostly
**						uses preset value for people and buildings.
*********************************************************************/
#include <iostream>
#include "University.hpp"
using namespace std;

int main()
{
	//Starting the university directory program
	University uni1;
	uni1.start();

	cin.get();
	return 0;

}
