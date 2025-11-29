#include <iostream>
using namespace std;

int main() {
    int a = 10;
    float b = 3.5;

    // Implicit type conversion (automatic)
    float result1 = a + b;  
    cout << "Implicit Conversion Result = " << result1 << endl;

    // Explicit type conversion (manual casting)
    int result2 = (int)b + a;   
    cout << "Explicit Conversion Result = " << result2 << endl;

    return 0;
}

