#include "BookShop.h"
#include "AudioBook.h"

void BookShop::operator+=(Book *newBook) {
    for (auto book: books) {
        if (*book == newBook) {
            cout << "Książka z identyfikatorem " << newBook->getIsbn() << " już istnieje" << endl;
            return;
        }
    }
    books.push_back(newBook);
}

void BookShop::operator-=(int isbn) {
    int index = 0;
    for (auto book: books) {
        if (book->getIsbn() == isbn) {
            books.erase(books.begin() + index);
            return;
        } else {
            index++;
        }
    }
}

ostream &operator<<(ostream &os, const BookShop &shop) {
    for (auto book: shop.books) {
        os << book << endl;
    }
    return os;
}
