#ifndef UNTITLED18_BOOKSHOP_H
#define UNTITLED18_BOOKSHOP_H

#include <iostream>
#include <vector>
#include "Book.h"
#include "PaperBook.h"

using namespace std;

class BookShop {
    vector<Book *> books;
public:
    void operator+=(Book* book);
    void operator-=(int isbn);
    friend ostream &operator<<(ostream &os, const BookShop &shop);
};


#endif //UNTITLED18_BOOKSHOP_H
