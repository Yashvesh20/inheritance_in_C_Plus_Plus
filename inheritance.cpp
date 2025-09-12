Yashvesh Singh 24070123138
#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "This animal eats other animals." << endl;
    }
};

class Lion : public Animal {
public:
    void roar() {
        cout << "The Lion roars." << endl;
    }
};

int main() {
    Lion myLion;
    myLion.eat();    
    myLion.roar();   
    return 0;
}

Output:
This animal eats other animals.
The Lion roars.

