#include "parseData.h"
#include <iostream>
#include <string>


parseData::parseData()
{
}


parseData::~parseData()
{
}
std::string  parseData::addXML(std::string stXML_)
{
	stXML = stXML_;
	return stXML;

}


void parseData::addToArray()
{
	//add to array with position number where words starts and finish
	
	tempLenght = stXML.length() / 2;

	for (int i = 0, j = 0, k = 0; i < tempLenght; k++, j++, i++)
	{
		if (i < tempLenght)
		{
			foundLocationFront[j] = stXML.find("<Person>", i);
			foundLocationBack[j] = stXML.find("</Person>", k);

			i = foundLocationFront[j]; // adjusting i to start search after first found <Person>
			k = foundLocationBack[j]; // adjusting k to begining of the first closing </Person>

			foundLocationFront[j] += pharse;  // adding lenght of word <Person>

		}
	}
}

void parseData::difference()
{ 
	// Working out the difference between front and back of searched phrase

	for (int i = 0; i < 2; i++)
	{
		differenceLoc[i] = foundLocationBack[i] - foundLocationFront[i];
	}
}

void parseData::display()
{
	//extract words from string

	int sizeOfArray = sizeof(differenceLoc) / sizeof(int);
	for (int i = 0, j = 1; i < sizeOfArray; j++, i++)
	{

		if (foundLocationFront[i] > 0)
		{
			std::cout << stXML.substr(foundLocationFront[i], differenceLoc[i]) << std::endl;
		}

	}
}