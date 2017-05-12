// SearchXML.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
#include "parseData.h"

using namespace std;

int main()
{
	std::string stXML = "<Table1><Person>Ed</Person><Person>Joe</Person></Table1>";
	//F 8, 30 | 16, 38
	//B 21 41 | 30, 50 

	int tempLenght = 0; 
	tempLenght = stXML.length()/2;
	unsigned int foundLocationFront[20]{ 0 };
	unsigned int foundLocationBack[20]{ 0 };
	int differenceLoc[5]{ 0 };
	int pharse = 8; //<Person>



	//feel array with position number where words starts
	for ( int i = 0, j =  0, k = 0; i < tempLenght; k++, j++, i++)
	{
		if (i < tempLenght)
		{
			foundLocationFront[j] = stXML.find("<Person>", i);
			foundLocationBack[j] = stXML.find("</Person>", k);
			
			i = foundLocationFront[j]; // adjusting i to start search after first found number
			k = foundLocationBack[j];

			foundLocationFront[j] += pharse;  // adding lenght of word <Person>
			
		}
	}

	// Working out the difference
	for ( int i = 0; i < 2; i++)
	{
		differenceLoc[i] = foundLocationBack[i] - foundLocationFront[i];
		//differenceLoc[j] -= pharse; // lenght of word Person
	}

	int sizeOfArray = sizeof(differenceLoc) / sizeof(int);

	//extract words from string
	for (int i = 0, j = 1; i < sizeOfArray; j++, i++)
	{

		if (foundLocationFront[i] > 0)
		{	
			std::cout << stXML.substr(foundLocationFront[i], differenceLoc[i]) << std::endl;
		}

	}

	system("pause");
    return 0;
}

