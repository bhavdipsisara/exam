#include <iostream>

using namespace std;
class Animal {
public:
    virtual void sound() const = 0;
    virtual void move() const = 0;

    virtual ~Animal() {}
};

class Dog : public Animal {
public:
    void sound() const override {
        cout << "Dog barks." << endl;
    }

    void move() const override {
        cout << "Dog runs." << endl;
    }
};

class Bird : public Animal {
public:
    void sound() const override {
        cout << "Bird chirps." << endl;
    }

    void move() const override {
        cout << "Bird flies." << endl;
    }
};

int main() {
    Animal* animals[2];
    animals[0] = new Dog();
    animals[1] = new Bird();
    
    for (int i = 0; i < 2; ++i) {
        animals[i]->sound(); 
        animals[i]->move(); 
    }
    
    
    for (int i = 0; i < 2; ++i) {
        delete animals[i];
    }

    return 0;
}
