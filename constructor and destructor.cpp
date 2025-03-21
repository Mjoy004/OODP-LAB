#include <iostream>
using namespace std;

class Demo {
public:
    // Constructor
    Demo() {
        cout << "Constructor called: Object created!" << endl;
    }

    // Destructor
    ~Demo() {
        cout << "Destructor called: Object destroyed!" << endl;
    }
};

int main() {
    cout << "Creating an object..." << endl;
    Demo obj;  // Constructor is automatically called

    cout << "End of main function..." << endl;
    return 0;  // Destructor is automatically called when obj goes out of scope
}
