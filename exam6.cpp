#include <iostream>
#include <stdexcept>
using namespace std;

class Calculator {
public:
   
    double divide(double numerator, double denominator) {
        if (denominator == 0) {
            throw runtime_error("Error: Division by zero is not allowed.");
        }
        return numerator / denominator;
    }
};

int main() {
    Calculator calc;
    double num, denom;

    try {
        num = 10.0;
        denom = 2.0;
        cout << "Result of " << num << " / " << denom << " = " << calc.divide(num, denom) << endl;
    } catch (const runtime_error& e) {
        cerr << e.what() << endl;
    }

    try {
        num = 10.0;
        denom = 0.0;
        cout << "Result of " << num << " / " << denom << " = " << calc.divide(num, denom) << endl;
    } catch (const runtime_error& e) {
        cerr << e.what() << endl;
    }

    return 0;
}
