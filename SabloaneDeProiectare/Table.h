#ifndef	TABLE_H
#define TABLE_H

#include <iostream>

using namespace std;

class Table {
public:
	string title;
	Table(string title) {
		this->title = title;
	}
	string getText() {
		return title;
	}
};

#endif