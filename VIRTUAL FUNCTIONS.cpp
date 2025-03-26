#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() { // Virtual function
        cout << "Base class show function" << endl;
    }
};

class Derived : public Base {
public:
    void show() override { // Overriding the base class function
        cout << "Derived class show function" << endl;
    }
};

int main() {
    Base* bptr;  // Base class pointer
    Derived d;   
    bptr = &d;   // Pointing to derived class object

    bptr->show(); // Calls Derived's show() due to virtual function
    return 0;
}
