#include<iostream>
using namespace std;

// Pure virtual function - a function for which we do not have an implementation.
// We do not write any functionality in it, we only declare this function

// Any class containing one or more pure virtual functions
// can not be used to define any object.

// These classes are also known as abstract classes. The classes that contain atleast one pure
// virtual functions.

// Classes derived from abstract classes need to implement the pure virtual function.

// Syntax = virtual <function_type> <function_name>() = 0;
class Shape{

public:
    virtual float calculate_area() = 0;
    // This pure virtual fu
};

class Square :  public Shape{
    float a;
    
    public:
        // Now to use calculate_area virtual fn we must define it here
        
    Square(float l){
        a = 1;
    }

    float calculate_area(){ // without this we can use the square class
                            // because without this Square class is an abstract class
        return a*a;
    }
};


class Circle : public Shape {
    float r;

    public:
        Circle(float x){
            r = x;
        }    

    float calculate_area(){ // Same as in Square class
        
        return 3.14*r*r;
    }
};

int main(){

    Shape* shape;

    Square s1(5);
    Circle c1(5);

    return 0;

    
    shape = &s1; 
    int a1 = shape->calculate_area();

    shape = &c1;
    int a2 = shape->calculate_area();

    cout << "Area fo square is : "<<a1<<endl;
    cout << "Area fo Circle is : "<<a2<<endl;

    return 0;
}