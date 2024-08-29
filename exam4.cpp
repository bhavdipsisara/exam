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
    virtual void display() const = 0;
    virtual ~Shape() {}
};


    class Circle : public Shape {
    private:
    double radius;

public:
    
    Circle(double r = 0.0) : radius(r) {
        calculateArea(); 
    }


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

        void display() const override {
        cout << "Circle Information:" << endl;
        cout << "Color: " << getColor() << endl;
        cout << "Radius: " << getRadius() << endl;
        cout << "Area: " << getArea() << endl;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l = 0.0, double w = 0.0) : length(l), width(w) {
        calculateArea(); 
    }

    
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

    void display() const override {
        cout << "Rectangle Information:" << endl;
        cout << "Color: " << getColor() << endl;
        cout << "Length: " << getLength() << endl;
        cout << "Width: " << getWidth() << endl;
        cout << "Area: " << getArea() << endl;
    }
};

int main() {
    Circle circle(5.0);
    circle.setColor("Red");

    Rectangle rectangle(4.0, 6.0);
    rectangle.setColor("Blue");

    Shape* shapes[2];
    shapes[0] = &circle;
    shapes[1] = &rectangle;

    for (int i = 0; i < 2; ++i) {
        shapes[i]->display();
        cout << endl;
    }

    return 0;
}
