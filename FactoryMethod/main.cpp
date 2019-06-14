#include <iostream>
#include "Factory.h"
#include "operationAddFactory.h"
#include "operation.h"
using namespace std;

int main()
{
	Factory* factory = new AddFactory();
	Operation* operation = factory->createOperation(3, 4);
	cout << operation->getResult();
	system("PAUSE");
	return 0;
}