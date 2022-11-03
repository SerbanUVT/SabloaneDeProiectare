#include <iostream>
#include <string>
#include <list>

using namespace std;
class Book {
public:
	string title;
	list<string> paragraphs;
	list<string> images;
	list<string> tables;
	Book(string title) {
		this->title = title;
	}

	void createNewParagraph(string paragraph) {
		paragraphs.push_back(paragraph);
	}
	void createNewImage(string image) {
		images.push_back(image);
	}
	void createNewTable(string table) {
		tables.push_back(table);
	}
	void showlist(list<string> f)
	{
		list<string>::iterator it;
		for (it = f.begin(); it != f.end(); ++it)
			cout << *it << " ";
		cout << endl;
	}
	void print() {
		cout << "Titlu carte: " << title << endl;
		cout << "Lista de paragrafe: ";
		showlist(paragraphs);
		cout << "Lista de imagini: ";
		showlist(images);
		cout << "Lista de tabele: ";
		showlist(tables);
	}
};