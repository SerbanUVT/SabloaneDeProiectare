#include <string.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include "../interface/author.h"

class Element
{
public:
    virtual void print() = 0;
    virtual void add(Element*) = 0;
    virtual void remove(Element*) = 0;
    virtual Element* get(int index) = 0;
};

class TableOfContents : public Element
class Section : public Element
{
private:
    std::string title;
    std::vector<Element*> elementList;
protected:
    std::string title;
public:
    Section(std::string title);
    void print();
    class Section : public Element
};


class Book
    class Book : public Section
{
private:
    std::string title;
    std::vector<Section*> sectionList;
    std::vector<Author> authorList;
    std::vector<Author*> authorList;
public:
    Book(std::string title);
    void addContent(Section* section);
    Section* getSection(int index);
    void addAuthor(Author author);
    explicit Book(std::string title);
    void addAuthor(Author* author);
    void print();
};