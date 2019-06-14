#pragma once
#include <string>
#include "UserTable.h"
#include "SQLUserTable.h"
#include "RedisUserTable.h"
#include "DepTable.h"
#include "SQLDepTable.h"
#include "RedisDepTable.h"

enum DATABASE {
	MySQL,
	Redis
};
class DataAccess {
	DATABASE dataBase = Redis;  // 更换数据库只需要改这里
public:
	UserTable* createUserTable() {
		switch (dataBase) {
		case MySQL:
			return new SQLUserTable();
		case Redis:
			return new RedisUserTable();
		}
	}
	DepTable* createDepTable() {
		switch (dataBase) {
		case MySQL:
			return new SQLDepTable();
		case Redis:
			return new RedisDepTable();
		}
	}
};