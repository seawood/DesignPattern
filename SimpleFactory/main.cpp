#include <iostream>
#include "Factory.h"
#include "operation.h"
using namespace std;

int main()
{
	cout << "Please input operation: " << endl;
	char op;
	cin >> op;
	Factory fac;
	Operation* oper = fac.createOperation(op, 4, 3);
	cout<<oper->getResult();
	system("PAUSE");
	return 0;
}