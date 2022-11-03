#pragma once
#include <string.h>
#include <iostream>

using namespace std;

class Author
{
private:
    string name;
public:
    Author(string name) {
        this->name = name;
    }
    void print() {
        cout << "Author: " << name << endl;
    }
};