#pragma once
#include "DepTable.h"

class SQLDepTable :public DepTable {
	int depId;
public:
	double getDepId() {
		return depId + 0.1; //这里调用MySQL的接口
	}
	void setDepId(double id) {
		depId = id - 0.1;  // 这里调用MySQL的接口
	}
};