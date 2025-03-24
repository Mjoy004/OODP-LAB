#include <iostream>
using namespace std;

// Base Class
class A {
public:
    void showA() {
        cout << "Class A" << endl;
    }
};

// Derived from A
class B : virtual public A {  // Virtual inheritance to avoid duplicate copies of A
public:
    void showB() {
        cout << "Class B" << endl;
    }
};

// Derived from A
class C : virtual public A {  // Virtual inheritance
public:
    void showC() {
        cout << "Class C" << endl;
    }
};

// Derived from both B and C
class D : public B, public C {
public:
    void showD() {
        cout << "Class D" << endl;
    }
};

int main() {
    D obj;
    obj.showA();  // No ambiguity because A is inherited virtually
    obj.showB();
    obj.showC();
    obj.showD();
    return 0;
}
