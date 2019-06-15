#include <iostream>
#include "OberverApp.h"
#include "ObserverWeb.h"
#include "NewsSubject.h"
using namespace std;

int main() {
	NewsSubject s;
	s.attach(new ObserverApp());
	s.attach(new ObserverWeb());
	s.setNews("hello");
	system("PAUSE");
	return 0;
}