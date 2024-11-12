#include <iostream>
#include <string>
using namespace std;

class Laptops {
private:
    string name;
    string model;
    int version;

public:
    // Constructor to initialize laptop details
    Laptops(string n, string m, int v) : name(n), model(m), version(v) {}

    // Getter functions
    string getName() { return name; }
    string getModel() { return model; }
    int getVersion() { return version; }
};

int main() {
    Laptops l1("hp", "2002A", 7);
    
    cout << l1.getName() << endl;
    cout << l1.getModel() << endl;
    cout << l1.getVersion() << endl;

    return 0;
}
