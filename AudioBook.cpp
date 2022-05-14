#include "AudioBook.h"

AudioBook::AudioBook(int isbn, const string &title, const string &author, double audioLength, const string &format)
        : Book(isbn, title, author), audioLength(audioLength), format(format) {}

void AudioBook::getDetails(ostream &str) {
    str << " audioLength: " << audioLength << " format: " << format;
}
