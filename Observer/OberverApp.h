#pragma once
#include <string>
#include <iostream>
#include "Observer.h"
using namespace std;

class ObserverApp :public Observer {
	string news;
public:
	void update(const string& n) {
		news = n;
		cout << "ObserverApp updated" << endl;
	}
};
