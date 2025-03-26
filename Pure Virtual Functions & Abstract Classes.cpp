class Shape {
public:
    virtual void draw() = 0; // Pure virtual function
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

int main() {
    // Shape s; // Error: Cannot instantiate an abstract class
    Shape* s = new Circle();
    s->draw(); // Calls Circle's draw function
    delete s;
}
