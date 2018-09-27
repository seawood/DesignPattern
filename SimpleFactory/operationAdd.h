#pragma once
#include "operation.h"

class OperationAdd :public Operation
{
	double result;
public:
	OperationAdd(double A,double B):Operation(A,B){}
	virtual double getResult()
	{
		result = getNumberA() + getNumberB();
		return result;
	}
};