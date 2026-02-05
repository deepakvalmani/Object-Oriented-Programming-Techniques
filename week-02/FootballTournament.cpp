#include <iostream>
using namespace std;

/**
 * Class: FootballTeam
 * Purpose: Tracks performance and demonstrates the use of friend functions.
 */
class FootballTeam {
private:
    string name;
    int goals, points;

public:
    FootballTeam(string n = "Unknown", int g = 0, int p = 0) 
        : name(n), goals(g), points(p) {}

    // Overloading the '+' operator to "merge" two teams (for combined statistics)
    FootballTeam operator+(FootballTeam &other) {
        return FootballTeam("Combined Team", goals + other.goals, points + other.points);
    }

    // friend function: declared inside, but defined outside.
    // Useful for functions that need to compare two different objects.
    friend void compareGoal(FootballTeam t1, FootballTeam t2);

    void display() { cout << name << " | Goals: " << goals << " | Points: " << points << endl; }
};

// Definition of the friend function
void compareGoal(FootballTeam t1, FootballTeam t2) {
    if (t1.goals > t2.goals) {
        cout << t1.name << " is the top-scoring team." << endl;
    } else {
        cout << t2.name << " is the top-scoring team." << endl;
    }
}

int main() {
    FootballTeam red("Red Devils", 12, 6);
    FootballTeam blue("Blue Sharks", 15, 9);
    compareGoal(red, blue);
    return 0;
}