#include <iostream>
#include "Factory.h"
#include "MySQLFactory.h"
#include "RedisFactory.h"
#include "UserTable.h"
#include "DepTable.h"
using namespace std;

int main() {
	Factory* factoryMySQL = new MySQLFactory();
	UserTable* userTable = factoryMySQL->createUserTable();
	userTable->setUserId(5);
	cout << userTable->getUserId() << endl;

	Factory* factoryRedis = new RedisFactory();
	DepTable* depTable = factoryRedis->createDepTable();
	depTable->setDepId(0.3);
	cout << depTable->getDepId() << endl;
	system("PAUSE");
	return 0;
}