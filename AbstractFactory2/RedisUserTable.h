#pragma once
#include <iostream>
#include "UserTable.h"

class RedisUserTable :public UserTable {
	int userId;
public:
	int getUserId() {
		std::cout << "RedisserTable getUserId" << std::endl;
		return userId + 2;  //这里调用redis的接口
	}
	void setUserId(int id) {
		std::cout << "RedisserTable setUserId" << std::endl;
		userId = id - 2;  //这里调用redis的接口
	}
};
