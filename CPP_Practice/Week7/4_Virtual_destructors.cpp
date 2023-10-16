#include<iostream>
using namespace std;
// Example for showing the need of virtual destructors


class Base{
    public:
    Base(){
        // Constructor
        cout<<"Constructor of base class";
    }

    ~Base(){
        // Destructor 
        cout<<"destructor of base class";
    }
};

class Child : public Base{

    public:
    Child(){
        cout<<"Constructor of Child Class"<<endl;
    }
    ~Child(){
        cout<<"Destructor of Child class"<<endl;
    }
};



int main(){

    Child* ch = new Child();
    Base* base = ch;

    delete base;

}

// Running this code will cause
// output:
/*
Constructor of base class
Constructor of Child Class
destructor of base class

*/

// As you can see the Destructor of child class is not called.
// So a memory leak occurs 
/*
Reason behind this behaviour:
We have used one parent class(Base) and a derived class(Child),
Insed which the both the constructors and destructors are defined.
Deleting an object of derived class using a pointer of parent  class
shows an undefined behaviour because it does not have virtual 
destructor. So, when we delete the object of child class, it invokes 
the base class' destructor is not invoked.

*/