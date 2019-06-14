#pragma once
#include <iostream>
#include "DepTable.h"

class SQLDepTable :public DepTable {
	int depId;
public:
	double getDepId() {
		std::cout << "SQLDepTable getDepId" << std::endl;
		return depId + 0.1; //这里调用MySQL的接口
	}
	void setDepId(double id) {
		std::cout << "SQLDepTable setDepId" << std::endl;
		depId = id - 0.1;  // 这里调用MySQL的接口
	}
};