#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <vector>
#include "Author.h"
#include "Chapter.h"
using namespace std;

class Book {
private:
	string title;
	vector<Author> authors;
	vector<Chapter> chapters;
public:
	Book(string title) {
		this->title = title;
		authors = vector<Author>();
		chapters = vector<Chapter>();
	}

	void addAuthor(Author author) {
		authors.push_back(author);
	}
	int createChapter(string name) {
		chapters.push_back(Chapter(name));
		return chapters.size() - 1;
	}
	Chapter getChapter(int index) {
		auto l = chapters.begin();
		advance(l, index);
		return *l;
	}
};

#endif