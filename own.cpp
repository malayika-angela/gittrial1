#include <iostream>
using namespace std;

int addNumbers(int a, int b) {
    return a + b;
}

int subtractNumbers(int m, int f) {
    return m - f;
}

int main() {
    int m = 15;
    int n = 10;

    cout << m + n << "\n";

    // Loop to print numbers from 16 to 39
    for (int x = 16; x < 40; x++) {
        cout << x << ",";
    }

    // Input two numbers
    int num1, num2;
    cout << "\nEnter number one: ";
    cin >> num1;
    cout << "Enter number two: ";
    cin >>num2;
    int sum = addNumbers(num1, num2);
    cout << sum << endl;

    // Check the condition
    if (sum > 30) { // Replaced with a clear condition
        int result = subtractNumbers(sum, 10); // Example subtraction
        cout << "Result after subtraction: " << result << endl; 
    } else {
        cout << "The sum is less than or equal to 30" << endl; // Corrected else statement
    }

    return 0;

}
