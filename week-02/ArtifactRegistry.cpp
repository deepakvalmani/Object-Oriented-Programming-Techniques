#include <iostream>
#include <string>
using namespace std;

/**
 * Class: Artifact
 * Purpose: Stores metadata for museum cataloging.
 */
class Artifact {
private:
    string name, registrationID, discoverer, origin;

public:
    Artifact(string n, string id, string d, string o) 
        : name(n), registrationID(id), discoverer(d), origin(o) {}

    // Concatenates multiple strings into a readable info summary
    string getArtifactInfo() {
        return "REG-ID: [" + registrationID + "]\nItem: " + name + 
               "\nFound by: " + discoverer + "\nOrigin: " + origin + "\n";
    }
};

int main() {
    Artifact a("Cyrus Cylinder", "ARC-539", "Hormuzd Rassam", "Babylon");
    cout << a.getArtifactInfo() << endl;
    return 0;
}