#pragma once
class Operation {
	double numberA;
	double numberB;
	double result;
public:
	Operation(double A,double B):numberA(A),numberB(B),result(0){}
	double getNumberA() { return numberA; }
	double getNumberB() { return numberB; }
	void setNumberA(double A) { numberA = A; }
	void setNumberB(double B) { numberB = B; }
	virtual double getResult() { return result; }
};