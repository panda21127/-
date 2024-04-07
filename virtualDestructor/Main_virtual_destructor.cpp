#include <iostream>
#include <string>

class A {
public:
    A() { 
        std::cout << "A()" << std::endl; 
    }
    virtual ~A() { 
        std::cout << "~A()" << std::endl; 
    }
};

class B : public A {
public:
    B() { 
        std::cout << "B()" << std::endl; 
    }
    ~B() { 
        std::cout << "~B()" << std::endl; 
    }
};

int main()
{
    A * pA = new B;
    delete pA;
    return 0;
}