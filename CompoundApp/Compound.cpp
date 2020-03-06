#include "Compound.h"
#include "Compound.h"
#include "ElementAmount.h"

using namespace std;

// Constructor
Compound::Compound(int nNumberElements)
{
	maxElements = nNumberElements;
	_elementAmount = new ElementAmount[nNumberElements];

}

Compound::~Compound()
{
	if (_elementAmount != NULL)
		delete[] _elementAmount;
}

void Compound::AddElement(string name, string symbol, int atomicWeight, int atomCount)
{
	if (index < maxElements)
	{
		_elementAmount[index].AddElementAmount(name, symbol, atomicWeight, atomCount);
			index++;
	}
}

void Compound::Print()
{
	for (int i = 0; i < maxElements; i++)
	{
		_elementAmount[i].printElementAmount();
	}
}


