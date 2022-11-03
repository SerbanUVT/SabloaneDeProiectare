#ifndef	IMAGE_H
#define IMAGE_H

#include <iostream>

using namespace std;

class Image {
public:
	string imageName;
	Image();
	Image(string imageName) {
		this->imageName = imageName;
	}
	string getText() {
		return imageName;
	}
};

#endif