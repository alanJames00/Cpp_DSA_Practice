#include<iostream>
#include<string>
using namespace std;



// Write a C++ class called "Employee" that has three private member variables: "name", "salary", and "employeeCode". The class should have a constructor that initializes these member variables and a public member function called "displayInfo" that prints out the employee's name, salary, and employeeCode.

class Employee{
    private:
        string name;
        int salary;
        string employeeCode;

    
    public:
        void displayInfo() {
            
            cout<<"Name: "<<name<<endl;
            cout<<"Salary: "<<salary<<endl;
            cout<<"Employee code :"<<employeeCode; 


        }

        Employee(){

    }
    Employee(string myName, int mySalary, string myCode) {
        name = myName;
        salary = mySalary;
        employeeCode = myCode;
    }    


};

int main(){
    Employee e1("Alan",2500,"r89");
    e1.displayInfo();


    return 0;
}