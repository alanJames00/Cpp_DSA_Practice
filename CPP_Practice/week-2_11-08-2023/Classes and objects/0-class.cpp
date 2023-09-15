#include<iostream>
#include<string>
using namespace std;
class Car{
    


    public:
    string name;
    void printName(){
        cout<<"Hello Car: "<<name;
    }
};

int main(){
    Car obj1;
    obj1.name = "Toyota";
    obj1.printName();
    return 0;
}