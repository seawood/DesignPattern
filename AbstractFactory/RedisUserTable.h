#pragma once
#include "UserTable.h"

class RedisUserTable :public UserTable {
	int userId;
public:
	int getUserId() {
		return userId + 2;  //这里调用redis的接口
	}
	void setUserId(int id) {
		userId = id - 2;  //这里调用redis的接口
	}
};
