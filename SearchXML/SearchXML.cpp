// SearchXML.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
#include "parseData.h"

using namespace std;

int main()
{
	std::string stXML = "123456789Person123456789Person"; // "<Table1><Person>Hello</Person><Person>JoeSpaggetti</Person></Table1>";


	std::cout << stXML.length() << std::endl;

	for (int i = 0; i < stXML.length(); i++)
	{
		std::cout << "i:" << i << " " << stXML.find("Person", i) << std::endl;

	}

	system("pause");
    return 0;
}

//string substr(int pos = 0, int n = string::npos) const;
//string s = "thanks for help, Kathy";
//cout << s.substr(7, 3) << endl; /* print "for" */
//cout << s.substr(17) << endl; /* print "Kathy" */