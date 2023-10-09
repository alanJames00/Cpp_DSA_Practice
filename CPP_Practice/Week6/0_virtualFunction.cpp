#include<iostream>
using namespace std;

// a virtual function is a member in the 
// base class that we expect to redefine in the derived class



// The override identifier specifies the member funcitons of the derived class that overrides
// the member functions of the base class.

class Base{

    public:
    virtual void print(){
        cout<<"Base";
    }
};

class Derived : public Base {
    public: 
    void print() override{
        cout<<"Derived";
    }
};

int main(){
    Derived d1;

    Base* b1 = &d1;

    return 0;
}