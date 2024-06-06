#include <iostream>
#include <vector>

class Shape {
public:
    void draw() const {
        std::cout << "Drawing a generic shape.\n";
    }
};

class Circle : public Shape {
public:
    void draw() const {
        std::cout << "Drawing a circle.\n";
    }
};

class Square : public Shape {
public:
    void draw() const {
        std::cout << "Drawing a square.\n";
    }
};

int main() {
    std::vector<Circle*> circles;
    circles.push_back(new Circle());

    std::vector<Square*> squares;
    squares.push_back(new Square());

    // Call draw for each shape, but it will always call the base class function
    for (const Circle* circle : circles) {
        circle->draw();  // Calls the base class function, not the derived class function
    }

    for (const Square* square : squares) {
        square->draw();  // Calls the base class function, not the derived class function
    }

    // Clean up
    for (const Circle* circle : circles) {
        delete circle;
    }

    for (const Square* square : squares) {
        delete square;
    }

    return 0;
}
