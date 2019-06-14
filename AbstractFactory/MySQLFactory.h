#pragma once
#include "Factory.h"
#include "SQLUserTable.h"
#include "SQLDepTable.h"

class MySQLFactory :public Factory {
	UserTable* createUserTable() {
		return new SQLUserTable();
	}
	DepTable* createDepTable() {
		return new SQLDepTable();
	}
};