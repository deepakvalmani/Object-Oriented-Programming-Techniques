#include <iostream>
#include <string>

using namespace std;

/**
 * Class: Book
 * Tracks book ratings and calculates average scores.
 */
class Book {
private:
    string title;
    int code;
    double price;
    float totalGrade; 
    int reviewCount;  

public:
    Book(string t, int c, double p) {
        title = t; code = c; price = p;
        totalGrade = 0; reviewCount = 0;
    }

    void review(float grd) {
        totalGrade += grd;
        reviewCount++;
    }

    int getCode() const { return code; }
    double getPrice() const { return price; }

    float getScore() const {
        return (reviewCount == 0) ? 0 : totalGrade / reviewCount;
    }
};

int main() {
    Book b("C++ Guide", 101, 29.99);
    b.review(5);
    b.review(4);
    cout << "Avg Score: " << b.getScore() << endl;
    return 0;
}