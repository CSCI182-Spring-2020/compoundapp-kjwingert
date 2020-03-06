#include <iostream>
#include "Compound.h"

using namespace std;

void printCompound(Compound& c)
{
	cout << "My Compound" << endl;
}

int main()
{

	// Create a Compound
	Compound* c = new Compound(2);
	c->AddElement("Carbon", "C", 6, 4);
	c->AddElement("hydorgen", "H", 1, 10);
	c->Print();
	delete c;
}

