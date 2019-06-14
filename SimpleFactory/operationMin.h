#pragma once
#include "operation.h"
class OperationMin :public Operation{
public:
	OperationMin(double A, double B) : Operation(A,B) {}
	virtual double getResult() {
		return getNumberA() - getNumberB();
	}
};