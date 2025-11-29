#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 3;

    // Arithmetic Operators
    cout << "--- Arithmetic Operators ---" << endl;
    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << endl;
    cout << "a % b = " << (a % b) << endl;

    // Relational Operators
    cout << "\n--- Relational Operators ---" << endl;
    cout << "a > b : " << (a > b) << endl;
    cout << "a < b : " << (a < b) << endl;
    cout << "a == b : " << (a == b) << endl;
    cout << "a != b : " << (a != b) << endl;

    // Logical Operators
    cout << "\n--- Logical Operators ---" << endl;
    cout << "(a > 0 && b > 0) : " << (a > 0 && b > 0) << endl;
    cout << "(a > 0 || b < 0) : " << (a > 0 || b < 0) << endl;
    cout << "!(a == b) : " << !(a == b) << endl;

    // Bitwise Operators
    cout << "\n--- Bitwise Operators ---" << endl;
    cout << "a & b = " << (a & b) << endl;
    cout << "a | b = " << (a | b) << endl;
    cout << "a ^ b = " << (a ^ b) << endl;
    cout << "a << 1 = " << (a << 1) << endl;
    cout << "a >> 1 = " << (a >> 1) << endl;

    return 0;
}

