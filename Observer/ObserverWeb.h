#pragma once
#include <string>
#include <iostream>
#include "Observer.h"
using namespace std;

class ObserverWeb :public Observer {
	string news;
public:
	void update(const string& n) {
		news = n;
		cout << "ObserverWeb updated" << endl;
	}
};

