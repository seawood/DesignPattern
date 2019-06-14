#pragma once
#include <iostream>
#include "DepTable.h"

class RedisDepTable :public DepTable {
	int depId;
public:
	double getDepId() {
		std::cout << "RedisDepTable getDepId" << std::endl;
		return depId + 0.5;
	}
	void setDepId(double id) {
		std::cout << "RedisDepTable setDepId" << std::endl;
		depId = id - 0.5;
	}
};