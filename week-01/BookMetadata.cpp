#include <iostream>
#include <string>

using namespace std;

/**
 * Class: Book
 * Stores static information for cataloging books.
 */
class Book {
private:
    string name, ISBN, author, publisher;

public:
    Book(string n, string i, string a, string p) 
        : name(n), ISBN(i), author(a), publisher(p) {}

    string getInfo() const {
        return ISBN + " - " + name + " by " + author;
    }
};

int main() {
    Book b("1984", "978-0451524935", "George Orwell", "Secker & Warburg");
    cout << b.getInfo() << endl;
    return 0;
}