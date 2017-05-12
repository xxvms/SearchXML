// SearchXML.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
#include "parseData.h"


int main()
{
	
	parseData parse;

	parse.addToArray();
	parse.difference();
	parse.display();


	system("pause");
    return 0;
}

