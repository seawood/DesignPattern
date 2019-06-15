#pragma once
// 抽象被观察者，提供被观察者都要实现的接口

#include "Observer.h"


class Subject {
public:
	virtual void attach(Observer*) = 0;
	virtual void dettach(Observer*) = 0;
	virtual void notify() = 0;
};