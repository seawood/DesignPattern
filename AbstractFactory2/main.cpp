#include <iostream>
#include "DataAccess.h"
#include "UserTable.h"
#include "DepTable.h"
using namespace std;

int main() {
	DataAccess dataAccess;
	UserTable* userTable = dataAccess.createUserTable();
	userTable->setUserId(1);
	cout << userTable->getUserId() << endl;

	DepTable* depTable = dataAccess.createDepTable();
	depTable->setDepId(0.1);
	cout << depTable->getDepId() << endl;
	system("PAUSE");
	return 0;
}