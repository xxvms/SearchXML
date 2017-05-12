#pragma once
#include <string>
class parseData
{
	std::string stXML = "<Table1><Person>Ed</Person><Person>Joe</Person></Table1>";
	int tempLenght = 0;
	unsigned int foundLocationFront[20]{ 0 };
	unsigned int foundLocationBack[20]{ 0 };
	unsigned int differenceLoc[5]{ 0 };
	int pharse = 8; //lenght of <Person> static????? 

public:
	parseData();
	~parseData();

	void addToArray();
	void difference();
	void display();

	//std::string findInParseData(std::string stXML, scrch);
};

//void addToArray(unsigned int foundLocationFront[], unsigned int foundLocationBack[]);
//void difference(unsigned int foundLocationFront[], unsigned int foundLocationBack[], unsigned int differenceLoc[]);
//void display(unsigned int foundLocationFront[], unsigned int differenceLoc[], std::string stXML);