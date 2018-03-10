/******************************************************************
** Author: 			Artem Slivka
** Date: 		    07/19/17
** Description:		Building.cpp is the function implementation file
**					for class Building. It allows a user to set the
**					the parameters for building, for example, name,
**					address, size, etc.
******************************************************************/

#include "Building.hpp"		//Link to class header

/*********************************************************************
** Description:		This is the default constructor for Building class.
*********************************************************************/
Building::Building()
{
	name = "";
	size = 0;	//sqft
	address = "";
}

/*********************************************************************
** Description:		This constructor sets the parameters for the 
**					Building object, as entered by user.
*********************************************************************/
Building::Building(string p_name, double p_size, string p_address)
{
	name = p_name;
	size = p_size;
	address = p_address;
}

/*********************************************************************
** Description:		This function prints all info for the Building 
**					object.
*********************************************************************/
void Building::printBuildInfo()
{
	cout << "===Building info===" << endl;
	cout << "Name: " << name << endl;
	cout << "Address: " << address << endl;
	cout << "Size: " << size << " (in sqft)" << endl << endl;
}






