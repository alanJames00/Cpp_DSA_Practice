#include<iostream>
using namespace std;

//Implement FizzBuzz Problem solution
//Explain the usage of if-elseif-else in case if-else does not cover all possible outcomes
int main(){
    int n;
    cout<<"Enter a number to check fizzBuzz"<<endl;
    cin>>n;

    if(n%15==0){
        cout<<"FizzBuzz";
    }

    else if(n%5==0){
        cout<<"Buzz";

    }
    else if(n%3==0){
        cout<<"Fizz";
    }
    else{
        cout<<"no fizz no buzz!!";
    }

    return 0;
}