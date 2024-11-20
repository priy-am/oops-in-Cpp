// ⁠wap to show multiple , multilevel inheritance and hierarchical inheritance.
#include <iostream>
using namespace std;

class Base {
public:
    void displayBase() {
        cout << "Base class function called" << endl;
    }
};
class Base1 {
public:
    void displayBase1() {
        cout << "Base1 class function called" << endl;
    }
};

class DerivedMultiple : public Base, public Base1 {
public:
    void displayDerivedMultiple() {
        cout << "DerivedMultiple class function called" << endl;
    }
};

class Intermediate : public Base {
public:
    void displayIntermediate() {
        cout << "Intermediate class function called" << endl;
    }
};

class Final : public Intermediate {
public:
    void displayFinal() {
        cout << "Final class function called" << endl;
    }
};

class Derived1 : public Base {
public:
    void displayDerived1() {
        cout << "Derived1 class function called" << endl;
    }
};

class Derived2 : public Base {
public:
    void displayDerived2() {
        cout << "Derived2 class function called" << endl;
    }
};

int main() {
    // Multiple Inheritance
    cout<<"Multiple Inheritance:- "<<endl;
    DerivedMultiple objMultiple;
    objMultiple.displayBase();
    objMultiple.displayBase1();
    objMultiple.displayDerivedMultiple();

    // Multilevel Inheritance
    cout<<"Multilevel Inheritance:- "<<endl;
    Final objFinal;
    objFinal.displayBase();
    objFinal.displayIntermediate();
    objFinal.displayFinal();

    // Hierarchical Inheritance
    cout<<"Hierarchical Inheritance:- "<<endl;
    Derived1 obj1;
    obj1.displayBase();
    obj1.displayDerived1();

    Derived2 obj2;
    obj2.displayBase();
    obj2.displayDerived2();

    return 0;
}
