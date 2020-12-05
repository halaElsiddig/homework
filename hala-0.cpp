
//hala siddig
//department:computer
//second class
//the beginning of the program
#include <iostream>
#include <cmath>

using namespace std;
//here we have defined aclass named shape have two abstract functions
class Shape {
public:
//Definition of values
    virtual double area() = 0;

    virtual double perimeter() = 0;
};
//1-defined aclass named  Ellipse have abstract functions but it  inherits the characteristics of class shape and do overriding for them 
class Ellipse : public Shape {
public:
//
    double a;
    double b;
    const double PI = 3.141;

    Ellipse(double A, double B) {
        this->a = A;
        this->b = B;
    }

    Ellipse() {}
//Return the area value
    double area() override {
        return a * b;
    }
//return the perimeter value
    double perimeter() override {
        return (2 * PI) * sqrt(((a * a) + (b * b)) / 2);;
    }
};
//the process of inheriting same to number (1)
class Circle : public Ellipse {
public:
//Define values
    double radius;

    Circle(double Radius) {
        this->radius = Radius;
    }

    double area() override {
        return PI * (radius * radius);
    }
//
    double perimeter() override {
        return 2 * PI * radius;;
    }
};

class Polygon : public Shape {
public:
    double p;
    double a;

    Polygon() {}

    Polygon(double numberOfSides, double raduis) {
        this->p = numberOfSides;
        this->a = raduis;
    }

    double area() override {
        return (1.0 / 2.0) * (p * a);
    }

    double perimeter() override {
        return a * p;
    }

};

class Triangle : public Polygon {
public:
    double base;
    double height;
    double a;
    double b;
    double c;

    Triangle(double a, double b, double c, double Base, double Height) {
        this->height = Height;
        this->a = a;
        this->b = b;
        this->c = c;
        this->base = Base;
    }

    double area() override {
        return (1.0 / 2.0) * base * height;
    }

    double perimeter() override {
        float A = base * height;
        return A;
    }

};

class Rectangle : public Polygon { //inheriting process
public:
//define values
    double width;
    double height;

    Rectangle(double Width, double Height) {
        this->width = Width;
        this->height = Height;
    }

    double area() override {
        return (width * height) * 1 / 2;
    }

    double perimeter() override {
        return width + width + height + height;
    }
};

class Square : public Polygon {
public:
    double side;

    Square(double Side) {
        this->side = Side;
    }

    double area() override {
        return side * side;
    }

    double perimeter() override {
        return side * 4;
    }

};

/*Here we define a function named printShapeInfo() when we called we passed to it the address of an object
inheriting from class shape and it executes the functions in it
*/
void printShapeInfo(Shape &shape) {
    cout << shape.area() << endl;
    cout << shape.perimeter() << endl;
    cout << "----------------\n";
}

//Here we define the "main"
int main() {

//Here we called function printShapeInfo()in each one separately in order to call the function from them
    cout<<"Ellipes:\n";
    cout<<"area:\n";
    cout<<"perimeter:\n";

    Ellipse e(2, 2);
    printShapeInfo(e);
    
    cout<<"Circle:\n";
    cout<<"area:\n";
    cout<<"perimeter:\n";
    Circle c(5);
    printShapeInfo(c);

    cout<<"Polygon:\n";
    cout<<"area:\n";
    cout<<"perimeter:\n";
    Polygon p(4, 2);
    printShapeInfo(p);

    cout<<"Triangle:\n";
    cout<<"area:\n";
    cout<<"perimeter:\n";
    Triangle t(5, 6, 7, 5, 8);
    printShapeInfo(t);

    cout<<"Rectangle:\n";
    cout<<"area:\n";
    cout<<"perimeter:\n";
    Rectangle r(3, 4);
    printShapeInfo(r);

    cout<<"Square:\n";
    cout<<"area:\n";
    cout<<"perimeter\n";
    Square s(5);
    printShapeInfo(s);
//The end of the program
return 0;
}
