#pragma once
#include "Factory.h"
#include "RedisUserTable.h"
#include "RedisDepTable.h"

class RedisFactory :public Factory {
	UserTable* createUserTable() {
		return new RedisUserTable();
	}
	DepTable* createDepTable() {
		return new RedisDepTable();
	}
};