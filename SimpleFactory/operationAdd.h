#pragma once
#include "operation.h"

class OperationAdd :public Operation {
public:
	OperationAdd(double A,double B) : Operation(A,B) {}
	virtual double getResult() {
		return getNumberA() + getNumberB();
	}
};