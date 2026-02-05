#include <iostream>
using namespace std;

/**
 * Purpose: Demonstrates the 'friend' keyword in C++.
 */
class Date {
private:
    int Day, Month, Year; // Private data inaccessible to normal classes

public:
    // friend class grants AgeCalculator full access to private members of Date
    friend class AgeCalculator; 

    Date(int d, int m, int y) : Day(d), Month(m), Year(y) {}
};

class AgeCalculator {
public:
    // This method accesses 'DOB.Year' which is private in class Date
    void calculateAge(Date DOB, int currentYear) {
        int age = currentYear - DOB.Year;
        cout << "Calculated Age: " << age << " years" << endl;
    }
};

int main() {
    Date dob(15, 6, 2000);
    AgeCalculator calc;
    calc.calculateAge(dob, 2026);
    return 0;
}