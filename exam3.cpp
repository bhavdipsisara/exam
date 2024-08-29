#include <iostream>
#include <cmath>
using namespace std;

class Shape {
private:
    string color;
    double area;

protected:
    void setArea(double a) {
        area = a;
    }

public:
    void setColor(const string& c) {
        color = c;
    }

    string getColor() const {
        return color;
    }

    double getArea() const {
        return area;
    }

    virtual void calculateArea() = 0;
};


class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r = 0.0) : radius(r) {}
    void setRadius(double r) {
        radius = r;
        calculateArea(); 
    }

    
    double getRadius() const {
        return radius;
    }

    
    void calculateArea() override {
        double area = M_PI * radius * radius;
        setArea(area);
    }
};


class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    
    Rectangle(double l = 0.0, double w = 0.0) : length(l), width(w) {}

    void setLength(double l) {
        length = l;
        calculateArea(); 
    }

    void setWidth(double w) {
        width = w;
        calculateArea(); 
    }

    
    double getLength() const {
        return length;
    }

    double getWidth() const {
        return width;
    }

   
    void calculateArea() override {
        double area = length * width;
        setArea(area);
    }
};

int main() {
    
    Circle circle(5.0);
    circle.setColor("Red");
    
    cout << "Circle Color: " << circle.getColor() << endl;
    cout << "Circle Radius: " << circle.getRadius() << endl;
    cout << "Circle Area: " << circle.getArea() << endl;

    
    Rectangle rectangle(4.0, 6.0);
    rectangle.setColor("Blue");
    
    cout << "Rectangle Color: " << rectangle.getColor() << endl;
    cout << "Rectangle Length: " << rectangle.getLength() << endl;
    cout << "Rectangle Width: " << rectangle.getWidth() << endl;
    cout << "Rectangle Area: " << rectangle.getArea() << endl;

    return 0;
}
