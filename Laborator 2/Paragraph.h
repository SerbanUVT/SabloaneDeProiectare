#ifndef	PARAGRAPH_H
#define PARAGRAPH_H

#include <iostream>

using namespace std;

class Paragraph {
public:
	string text;
	Paragraph(string text) {
		this->text = text;
	}
	string getText() {
		return text;
	}
};

#endif