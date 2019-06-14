#pragma once
#include "DepTable.h"

class RedisDepTable :public DepTable {
	int depId;
public:
	double getDepId() {
		return depId + 0.5;
	}
	void setDepId(double id) {
		depId = id - 0.5;
	}
};