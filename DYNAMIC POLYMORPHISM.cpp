#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() {  // Virtual function
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override {  // Overriding base class function
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal* animalPtr; // Base class pointer

    Dog d;
    Cat c;

    animalPtr = &d;
    animalPtr->makeSound(); // Calls Dog's makeSound()

    animalPtr = &c;
    animalPtr->makeSound(); // Calls Cat's makeSound()

    return 0;
}
