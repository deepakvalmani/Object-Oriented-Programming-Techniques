#include <iostream>
#include <string>

using namespace std;

/**
 * Class: Date
 * Represents a calendar date with basic validation for months.
 */
class Date {
public:
    int day;
    int month;
    int year;

    // Constructor with basic month validation
    Date(int day, int month, int year) {
        this->day = day;
        this->year = year;
        // Logic to ensure month is between 1-12
        this->month = (month > 12 || month < 1) ? 1 : month;
    }

    // Interactive input methods
    void getDay() { cout << "Enter Day: "; cin >> day; }
    void getMonth() { cout << "Enter Month: "; cin >> month; }
    void getYear() { cout << "Enter Year: "; cin >> year; }

    void setDay(int day) { this->day = day; }
    void setMonth(int month) {
        this->month = (month > 12 || month < 1) ? 1 : month;
    }
    void setYear(int year) { this->year = year; }

    // Returns date as string
    string formatdate() {
        return to_string(day) + "/" + to_string(month) + "/" + to_string(year);
    }
};

int main() {
    Date d1(19, 1, 2024);
    cout << d1.formatdate() << endl;
    return 0;
}