#include <iostream>
using namespace std;

/**
 * Class: Player
 * Purpose: Financial modeling for professional athletes.
 */
class Player {
private:
    string firstName, lastName;
    double monthlyContract;

public:
    // Constructor handles data validation: salary cannot be negative
    Player(string f, string l, double m) : firstName(f), lastName(l) {
        monthlyContract = (m < 0) ? 0.0 : m;
    }

    // Logic method for financial calculation
    double yearly_earnings() { return 12 * monthlyContract; }

    // Logic method for percentage-based salary adjustment
    void update_contract(double percentage) {
        if (percentage > 0) {
            monthlyContract *= (1 + percentage);
            cout << "Contract updated with a " << percentage * 100 << "% increase." << endl;
        }
    }

    void display() {
        cout << firstName << " " << lastName << " | Monthly: $" << monthlyContract << endl;
    }
};

int main() {
    Player p("Kylian", "Mbappe", 100000);
    p.update_contract(0.25); // 25% raise
    p.display();
    return 0;
}