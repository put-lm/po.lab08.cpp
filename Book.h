#ifndef UNTITLED15_BOOK_H
#define UNTITLED15_BOOK_H

#include <iostream>

using namespace std;

class Book {
protected:
    int isbn;
    string title;
    string author;
public:
    int getIsbn() const;
    Book(int isbn, string title, string author);
    virtual void getDetails(std::ostream& str) = 0;
    friend ostream &operator<<(ostream &os, Book* book);
    bool operator==(Book *rhs);
};

#endif //UNTITLED15_BOOK_H
