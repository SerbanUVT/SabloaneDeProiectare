#ifndef	CHAPTER_H
#define CHAPTER_H

#include <iostream>
#include <vector>
#include "SubChapter.h"

using namespace std;

class Chapter {
public:
    string name;
    vector<SubChapter> subChapters;
    Chapter(string name) {
        this->name = name;
        subChapters = vector<SubChapter>();
    }
    int createSubChapter(string name) {
        subChapters.push_back(SubChapter(name));
        return subChapters.size() - 1;
    }
    SubChapter getSubChapter(int index) {
        auto l = subChapters.begin();
        advance(l, index);
        return *l;
    }
};

#endif