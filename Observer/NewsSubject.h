#pragma once
#include <unordered_set>
#include <string>
#include "Subject.h"
#include "Observer.h"
using namespace std;

class NewsSubject : public Subject{
	string news;
	unordered_set<Observer*> record;
public:
	void attach(Observer* observer) {
		record.insert(observer);
	}
	void dettach(Observer* observer) {
		auto itr = record.find(observer);
		if (itr != record.end())
			record.erase(itr);
	}
	void notify() {
		for (auto& item : record)
			item->update(news);
	}
	void setNews(const string& s) {
		news = s;
		notify();
	}


};
