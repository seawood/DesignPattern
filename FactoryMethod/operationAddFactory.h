#pragma once
#include "Factory.h"
#include "operationAdd.h"

class AddFactory :public Factory {
public:
	Operation* createOperation(double A, double B) {
		return new OperationAdd(A, B);
	}
};
