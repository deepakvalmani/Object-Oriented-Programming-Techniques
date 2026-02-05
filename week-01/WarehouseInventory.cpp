#include <iostream>
#include <vector>

using namespace std;

/**
 * Class: WareHouse
 * Manages inventory using vectors for item codes and quantities.
 */
class WareHouse {
private:
    vector<int> codes;
    vector<int> quantities;

public:
    WareHouse() {}

    // Adds stock or updates existing entry
    void stock(int c, int q) {
        for (int i = 0; i < codes.size(); i++) {
            if (codes[i] == c) {
                quantities[i] += q;
                return;
            }
        }
        codes.push_back(c);
        quantities.push_back(q);
    }

    // Deducts stock if available
    void order(int c, int q) {
        for (int i = 0; i < codes.size(); i++) {
            if (codes[i] == c) {
                if (quantities[i] >= q) {
                    quantities[i] -= q;
                } else {
                    cout << "The requested quantity is not available" << endl;
                }
                return;
            }
        }
        cout << "Code " << c << " not found" << endl;
    }

    void show(int c) {
        for (int i = 0; i < codes.size(); i++) {
            if (codes[i] == c) {
                cout << quantities[i] << " items stored for code " << c << endl;
                return;
            }
        }
    }
};

int main() {
    WareHouse w;
    w.stock(1, 10);
    w.show(1);
    return 0;
}