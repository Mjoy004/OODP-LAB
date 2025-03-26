class Base {
public:
    virtual ~Base() { // Virtual destructor
        cout << "Base destructor called" << endl;
    }
};

class Derived : public Base {
public:
    ~Derived() {
        cout << "Derived destructor called" << endl;
    }
};

int main() {
    Base* bptr = new Derived();
    delete bptr; // Calls Derived's destructor first, then Base's
    return 0;
}
