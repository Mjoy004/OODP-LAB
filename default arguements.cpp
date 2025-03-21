#include <iostream>

using namespace std;

// Function with default arguments
void greet(string name = "Guest", int age = 18) {
    cout << "Hello, " << name << "! You are " << age << " years old." << endl;
}

int main() {
    greet();                      // Uses default values: "Guest", 18
    greet("Alice");               // Uses "Alice", default age: 18
    greet("Bob", 25);             // Uses "Bob", 25

    return 0;
}
