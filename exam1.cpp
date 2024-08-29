#include <iostream>

using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    
    Rectangle(double l = 0.0, double w = 0.0) : length(l), width(w) {}

    
    void setLength(double l) {
        if (l >= 0) {
            length = l;
        } else {
            cerr << "Length must be non-negative." << endl;
        }
    }

   
    void setWidth(double w) {
        if (w >= 0) {
            width = w;
        } else {
            cerr << "Width must be non-negative." << endl;
        }
    }

   
    double getLength() const {
        return length;
    }

   
    double getWidth() const {
        return width;
    }


    double calculateArea() const {
        return length * width;
    }
};

int main() {
    
    Rectangle rect;

    
    rect.setLength(5.0);
    rect.setWidth(3.0);
    
    cout << "Length: " << rect.getLength() << endl;
    cout << "Width: " << rect.getWidth() << endl;
    cout << "Area: " << rect.calculateArea() << endl;

    return 0;
}
