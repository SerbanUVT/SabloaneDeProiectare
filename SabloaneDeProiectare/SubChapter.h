#ifndef	SUBCHAPTER_H
#define SUBCHAPTER_H

#include <iostream>
#include <vector>
#include "Paragraph.h"
#include "Table.h"
#include "Image.h"

using namespace std;

class SubChapter {
public:
    string name;
    vector<Paragraph> paragraphs;
    vector<Table> tables;
    vector<Image> images;
    SubChapter(string name) {
        this->name = name;
        paragraphs = vector<Paragraph>();
        tables = vector<Table>();
        images = vector<Image>();
    }
    void createNewParagraph(string content)
    {
        paragraphs.push_back(Paragraph(content));
    }
    void createNewTable(string content)
    {
        tables.push_back(Table(content));
    }
    void createNewImage(string content)
    {
        images.push_back(Image(content));
    }
    void print() {
        cout << "SubChapter: " << name << endl;
        for (int i = 0; i < paragraphs.size(); i++) {
            cout << "Pragraph: " << paragraphs[i].getText() << endl;
        }
        for (int i = 0; i < tables.size(); i++) {
            cout << "Image with name: " << tables[i].getText() << endl;
        }
        for (int i = 0; i < images.size(); i++) {
            cout << "Table with title: " << images[i].getText() << endl;
        }
    }
};

#endif