    #include <iostream>

    int x = 10; // Global variable

    int main() {
        int x = 20; // Local variable
        std::cout << "Local x: " << x << std::endl;
        std::cout << "Global x: " << ::x << std::endl;
        return 0;
    }
