#include "Book.h"

#include <utility>

Book::Book(int isbn, string title, string author) : isbn(isbn), title(std::move(title)),
                                                    author(std::move(author)) {}

int Book::getIsbn() const {
    return isbn;
}

ostream &operator<<(ostream &os, Book* book) {
    os << "isbn: " << book->isbn << " title: " << book->title << " author: " << book->author;
    book->getDetails(os);
    return os;
}

bool Book::operator==(Book *rhs) {
    return isbn == rhs->getIsbn();
}