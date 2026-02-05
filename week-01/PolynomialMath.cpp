#include <iostream>
#include <string>

using namespace std;

/**
 * Class: Polynomial
 * Handles quadratic equations (ax^2 + bx + c) using operator overloading.
 */
class Polynomial {
private:
    int a, b, c;

public:
    Polynomial() : a(1), b(1), c(1) {}
    Polynomial(int a, int b, int c) : a(a), b(b), c(c) {}

    string format() const {
        return to_string(a) + "x^2 + " + to_string(b) + "x + " + to_string(c);
    }

    int eval(int x) const { return a * x * x + b * x + c; }

    // Operator Overloading
    Polynomial operator+(const Polynomial &other) const {
        return Polynomial(a + other.a, b + other.b, c + other.c);
    }

    int &operator[](int index) {
        if (index == 0) return a;
        if (index == 1) return b;
        return c;
    }
};

int main() {
    Polynomial p(1, 2, 3);
    cout << p.format() << " at x=2 is " << p.eval(2) << endl;
    return 0;
}