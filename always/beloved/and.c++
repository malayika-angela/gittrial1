#include <iostream>

using namespace std;

int main() {
    int angella = 5; // Initialize angella with a meaningful value

    // Outer loop: counts from 6 to 20
    for (int b = 6; b <= 20; b++) {
        // Inner loop: prints '*' angella times
        for (int i = 0; i < angella; i++) {
            cout << "*"; // Print an asterisk
        }
        
        cout << " value of b: " << b << endl; // Print the value of b
    }

    return 0;
}