#include <iostream>
using namespace std;

/**
 * Class: OxygenTank
 * Purpose: Simulates a physical system with state transitions.
 */
class OxygenTank {
public:
    int oxygenLevel;

    OxygenTank() : oxygenLevel(200) {}

    // Method with side effects: If levels drop below 100, a refill is triggered
    void Consume(int units) {
        if (oxygenLevel < 100) {
            refill();
        }
        oxygenLevel -= units;
    }

    void refill() {
        oxygenLevel = 200;
        cout << ">> Alert: Oxygen level was low. Automatic refill to 200 triggered." << endl;
    }
};

int main() {
    OxygenTank tank;
    tank.Consume(150); // This will drop level to 50, but consume logic checks *before* next step
    cout << "Current Tank Level: " << tank.oxygenLevel << endl;
    return 0;
}