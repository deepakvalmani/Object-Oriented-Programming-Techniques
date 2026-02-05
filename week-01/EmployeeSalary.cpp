#include <iostream>
#include <string>

using namespace std;

/**
 * Class: Employee
 * Manages employee salary and raises.
 */
class Employee {
private:
    string f_name, l_name;
    double salary;

public:
    Employee(string f, string l, double s) : f_name(f), l_name(l) {
        salary = (s < 0.0) ? 0.0 : s; // Validation
    }

    double yearlySalary() const { return salary * 12; }
    void giveRaise(double percent) { salary += salary * (percent / 100); }
};

int main() {
    Employee e("John", "Doe", 3000);
    cout << "Yearly: " << e.yearlySalary() << endl;
    return 0;
}