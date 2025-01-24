#include<iostream>

class A {
public:
    void print() {
        std::cout << "A" << std:: endl;
    }
};

class B: public A {
public:
    void print() {
        std::cout << "B" << std::endl;
    }
};

class AA {
public:
    virtual void print() {
        std::cout << "virtual A" << std:: endl;
    }
};

class BB: public AA {
public:
    void print() {
        std::cout << "virtual B" << std::endl;
    }
};

int main () {
    A* obj = new B;
    obj->print();

    AA* objobj = new BB;
    objobj->print();
}