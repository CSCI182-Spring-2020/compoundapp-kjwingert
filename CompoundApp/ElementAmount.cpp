#include <iostream>
#include "ElementAmount.h"
#include "Element.h"

using namespace std;

// Constructor
ElementAmount::ElementAmount(string symbol, string name, int atomicNumber, int atomCount)
{
	_atomCount = atomCount;
	_element = new Element(name, symbol, atomicNumber);

}

// Destructor
ElementAmount::~ElementAmount()
{
	if (_element != NULL)
		delete _element;
}

void ElementAmount::printElementAmount()
{
	_element->PrintElement();
	cout << "Atoms: " << _atomCount << endl;
}

void ElementAmount::AddElementAmount(string name, string symbol, int atomicNumber, int atomCount)
{
	_atomCount = atomCount;
	_element = new Element(name, symbol, atomicNumber);
}