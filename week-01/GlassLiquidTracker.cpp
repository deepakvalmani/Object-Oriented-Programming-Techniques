#include <iostream>

using namespace std;

/**
 * Class: Glass
 * Simulates a drinking glass with a maximum capacity of 200.
 */
class Glass {
private:
    int liquidLevel;

public:
    Glass() : liquidLevel(200) {}

    void drink(int quantity) {
        if (quantity > liquidLevel) cout << "Not enough liquid!" << endl;
        else liquidLevel -= quantity;
    }

    void refill() {
        liquidLevel = 200;
        cout << "Refilled to 200." << endl;
    }

    int getLevel() const { return liquidLevel; }
};

int main() {
    Glass g;
    g.drink(50);
    cout << "Level: " << g.getLevel() << endl;
    return 0;
}