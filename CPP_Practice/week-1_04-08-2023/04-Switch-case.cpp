#include<iostream>
using namespace std;

//Explain the usage of switch case statement with the help of the following problem
int main(){
    int num;
    cout<<"Enter the number to check for switch case"<<endl;
    cin>>num;

    switch(num){
        case 1:
            cout<<"the number is one";
            break;
        case 2:
            cout<<"the number is two";
            break;
        case 3:
            cout<<"the number is three";
            break;
        default:
            cout<<"The number is not in the switch case. So default";
    }

    return 0;
}