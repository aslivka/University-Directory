/******************************************************************
** Author: 			Artem Slivka
** Date: 			07/19/17
** Description:		Building.hpp is the header file for class
**					Building. It contains function declarations 
**					for the class.
******************************************************************/

#ifndef BUILDING_HPP
#define BUILDING_HPP
#include <string>
#include <iostream>
using std::string;
using std::endl;
using std::cout;

class Building
{
private:
	string name;
	double size;
	string address;

public:
	Building();
	Building(string p_name, double p_size, string p_address);
	void printBuildInfo();

};

#endif 
