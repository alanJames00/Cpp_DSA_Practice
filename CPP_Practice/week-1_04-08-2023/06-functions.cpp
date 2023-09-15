#include<iostream>
using namespace std;
//Explain the usage functions and functions calling another functions

//function def - void return type
void sayHello(){
    cout<<"Hello World"<<endl;
}
//function def - int return type
int isEven(int n){
    if(n%2==0){
        return 1;
    }
    else{
        return 0;
    }
}



int main(){
    //Function declaration
    int isEven(int n);

    // cout<<isEven(2);

    return 0;
}