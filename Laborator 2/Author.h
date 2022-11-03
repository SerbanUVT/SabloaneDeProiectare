#ifndef AUTHOR_H
#define AUTHOR_H

#include <iostream>

using namespace std;

class Author {
public:
	string nume;
public:
	Author() {
		this->nume = "";
	}
	Author(string nume) {
		this->nume = nume;
	}
	void print() {
		cout << "Nume autor: " << nume;
	}
};

#endif