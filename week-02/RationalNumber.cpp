#include <iostream>
#include <string>
#include <cmath>

using namespace std;

/**
 * Class: Rational
 * Purpose: Represents a mathematical fraction (numerator/denominator).
 * Features: Automatic reduction to simplest form and multiple constructor types.
 */
class Rational {
private:
    int num, den;

    // Euclidean algorithm to find the Greatest Common Divisor
    int gcd(int a, int b) {
        return (b == 0) ? a : gcd(b, a % b);
    }

public:
    // Parameterized Constructor with default values
    Rational(int n = 0, int d = 1) : num(n), den(d) {
        if (den == 0) den = 1; // Basic safety to prevent division by zero
        reduce();
    }

    // String-based Constructor: Parses a string like "3/4" into integers
    Rational(string s) {
        int pos = s.find('/');
        num = stoi(s.substr(0, pos));
        den = stoi(s.substr(pos + 1));
        reduce();
    }

    // Double-based Constructor: Converts a decimal (e.g., 0.75) to a fraction (3/4)
    Rational(double value) {
        const int precision = 1000; // Multiplier to handle 3 decimal places
        num = round(value * precision);
        den = precision;
        reduce();
    }

    // Method to simplify the fraction (e.g., 4/8 becomes 1/2)
    void reduce() {
        int g = gcd(abs(num), abs(den));
        num /= g;
        den /= g;
    }

    // Operator Overloading: Allows adding two Rational objects using the '+' sign
    Rational operator+(const Rational &r) {
        // Formula: (a/b) + (c/d) = (ad + bc) / (bd)
        return Rational(num * r.den + r.num * den, den * r.den);
    }

    string to_string_frac() {
        return to_string(num) + "/" + to_string(den);
    }
};

int main() {
    Rational r1("1/2");
    Rational r2(0.25);
    Rational result = r1 + r2; // Using the overloaded + operator
    cout << "Result of 1/2 + 0.25: " << result.to_string_frac() << endl;
    return 0;
}