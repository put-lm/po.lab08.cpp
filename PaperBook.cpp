#include "PaperBook.h"

PaperBook::PaperBook(int isbn, const string &title, const string &author, Cover cover, int numberOfPages) : Book(isbn,
                                                                                                                 title,
                                                                                                                 author),
                                                                                                            cover(cover),
                                                                                                            numberOfPages(
                                                                                                                    numberOfPages) {}

void PaperBook::getDetails(ostream &str) {
    string coverType;
    switch (cover) {
        case Cover::soft:
            coverType = "Soft";
            break;
        case Cover::hard:
            coverType = "Hard";
    }

    str << " cover: " << coverType << " numberOfPages: " << numberOfPages;
}
