#include <iostream>

class Counter {
private:
    static int count; // Static member variable declaration

public:
    Counter() {
        count++; // Increment count for each object created
    }

    static void showCount() { // Static member function
        std::cout << "Count: " << count << std::endl;
    }
};

// Definition of static member variable
int Counter::count = 0;

int main() {
    Counter c1, c2, c3;
    Counter::showCount(); // Accessing static function
    return 0;
}
