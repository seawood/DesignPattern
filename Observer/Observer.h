#pragma once
// 抽象观察者，定义具体观察者都要实现的接口

#include <string>
using namespace std;

class Observer {
public:
	virtual void update(const string& news) = 0;
};
