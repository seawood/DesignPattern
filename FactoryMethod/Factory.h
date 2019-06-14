#pragma once
#include "operation.h"

class Factory {
public:
	virtual Operation* createOperation(double A, double B) = 0;
};