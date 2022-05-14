#include "BookShop.h"
#include "AudioBook.h"

using namespace std;

int main() {
    BookShop shop;
    shop += new AudioBook(1, "Harry Potter", "J. K. Rowling", 1.22, "mp3");
    shop += new PaperBook(2, "Wiedźmin", "A. Sapkowski", Cover::hard, 320);
    shop += new PaperBook(2, "Wiedźmin", "A. Sapkowski", Cover::hard, 320); // tutaj powinien wystąpić błąd
    cout << shop;
    shop -= 2;
    cout << endl;
    cout << shop;
    return 0;
}
