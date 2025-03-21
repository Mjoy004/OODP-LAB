#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    // Parameterized Constructor
    Person(string n, int a) {
        name = n;
        age = a;
        cout << "Constructor called for " << name << endl;
    }

    // Destructor
    ~Person() {
        cout << "Destructor called for " << name << endl;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Person p1("Alice", 25);
    p1.display();

    Person p2("Bob", 30);
    p2.display();

    return 0;  // Destructor is automatically called for p1 and p2
}
