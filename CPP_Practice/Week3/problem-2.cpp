// Write a C++ class called "Rectangle" that has two private member variables: "length" and "width". The class should have a constructor that initializes these member variables and public member functions called "getArea" and "getPerimeter" that return the rectangle's area and perimeter, respectively.
#include<iostream>
using namespace std;

class Rectangle{
    private:
        int l;
        int w;
    public:
    Rectangle(int length,int width) {
        l = length;
        w = width;
    }

    int getArea(){
        return l*w;
    }
    int getPerimeter(){
        return 2*(l+w);
    }
};
int main(){

    Rectangle r1(5,4);
    cout<<"Area: "<<r1.getArea()<<endl;
    cout<<"Perimeter: "<<r1.getPerimeter()<<endl;

    return 0;
}