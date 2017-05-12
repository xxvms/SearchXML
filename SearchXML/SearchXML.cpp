// SearchXML.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
#include "parseData.h"


int main()
{
	
	parseData parse;

	parse.addXML("<Table1><Person>Ed</Person><Person>Joe</Person></Table1>");
	parse.addToArray();
	parse.difference();
	parse.display();

	system("pause");
    return 0;
}

