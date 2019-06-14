#pragma once
#include "UserTable.h"
#include "DepTable.h"

class Factory {
public:
	virtual UserTable* createUserTable() = 0;
	virtual DepTable* createDepTable() = 0;
};