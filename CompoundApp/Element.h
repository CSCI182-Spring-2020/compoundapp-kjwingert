#pragma once
#include <iostream>

using namespace std;

class Element
{
private:
	string _symbol = "";
	string _name = "";
	int _atomicNumber = 0;

public:
	Element(string symbol, string name, int atomicNumber);
	void PrintElement();

};

