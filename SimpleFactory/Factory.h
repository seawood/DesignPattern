#pragma once
#include <exception>
#include <iostream>
#include "operation.h"
#include "operationAdd.h"
#include "operationMin.h"

class Factory {
public:
	Operation* createOperation(char s, double A, double B) {
		try {
			switch (s) {
			case '+':
				return new OperationAdd(A,B);
			case '-':
				return new OperationMin(A,B);
			}
		}
		catch (std::exception& e) {
			std::cout << "No such operation" << std::endl;
		}
	}
};