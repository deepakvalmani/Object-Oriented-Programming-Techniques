#include <iostream>
#include <vector>
#include <string>

using namespace std;

/**
 * Class: IntegerSet
 * Purpose: Efficiently stores a set of integers from 0-99 using a boolean map.
 */
class IntegerSet {
private:
    vector<bool> my_set; // true = present, false = absent

public:
    // Default: Creates an empty set
    IntegerSet() : my_set(100, false) {}

    // Constructor: Takes an array of ints and marks them true in the boolean vector
    IntegerSet(int arr[], int size) : my_set(100, false) {
        for (int i = 0; i < size; i++) {
            if (arr[i] >= 0 && arr[i] < 100) my_set[arr[i]] = true;
        }
    }

    // Logic for Union (A or B): If an element is in either set, it's in the result
    IntegerSet UnionOfSets(const IntegerSet &other) {
        IntegerSet res;
        for (int i = 0; i < 100; i++) {
            res.my_set[i] = my_set[i] || other.my_set[i];
        }
        return res;
    }

    void insertElement(int k) { if (k >= 0 && k < 100) my_set[k] = true; }
    void deleteElement(int k) { if (k >= 0 && k < 100) my_set[k] = false; }

    string to_string_set() {
        string s = "{ ";
        for (int i = 0; i < 100; i++) {
            if (my_set[i]) s += to_string(i) + " ";
        }
        return s + "}";
    }
};

int main() {
    int data[] = {5, 10, 15};
    IntegerSet s1(data, 3);
    cout << "Set contains: " << s1.to_string_set() << endl;
    return 0;
}