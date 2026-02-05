#include <iostream>
#include <cstring>

using namespace std;

/**
 * Class: User
 * Purpose: Demonstrates "Deep Copying" when handling pointer-based data on the heap.
 */
class User {
private:
    string name;
    int age;
    char *profile_bio; // Pointer to a char array
    int *session_ID;   // Pointer to an integer

public:
    // Constructor: Allocates memory on the heap using 'new'
    User(string n, int a, const char *bio, int id) : name(n), age(a) {
        profile_bio = new char[strlen(bio) + 1];
        strcpy(profile_bio, bio);
        session_ID = new int(id);
    }

    // Copy Constructor (Deep Copy): Essential because we have pointers.
    // Without this, copying objects would lead to multiple objects pointing to the same memory.
    User(const User &other) {
        name = other.name;
        age = other.age;
        // Allocate NEW memory for the copy
        profile_bio = new char[strlen(other.profile_bio) + 1];
        strcpy(profile_bio, other.profile_bio);
        session_ID = new int(*other.session_ID);
    }

    // Destructor: Must manually release heap memory to avoid memory leaks
    ~User() {
        delete[] profile_bio;
        delete session_ID;
    }

    void print() const {
        cout << name << " (Age: " << age << ") Bio: " << profile_bio << endl;
    }
};

int main() {
    User original("Alice", 25, "Software Engineer", 9999);
    User clone = original; // Triggers the Deep Copy constructor
    clone.print();
    return 0;
}