#pragma once
#include "Factory.h"
#include "operationMin.h"

class MinFactory : public Factory {
	Operation* createOperation(double A, double B) {
		return new OperationMin(A, B);
	}
};