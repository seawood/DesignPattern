#pragma once
#include "UserTable.h"

class SQLUserTable :public UserTable {
	int userId;
public:
	int getUserId() {
		return userId+1; //这里调用MySQL的接口
	}
	void setUserId(int id) {
		userId = id-1;  //这里调用MySQL的接口
	}
};
