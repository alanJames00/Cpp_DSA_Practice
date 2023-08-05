#include<iostream>
using namespace std;
//Explain the output of the following 
void myFunc1(){
    myFunc();
    cout<< "2" <<endl;
}

void myFunc2(){
    myFunc2();
    cout<<"2";
}


void myFunc();

int main(){

    myFunc();
    return 0;
}

void myFunc(){
    cout<<"Hello"<<endl;
}