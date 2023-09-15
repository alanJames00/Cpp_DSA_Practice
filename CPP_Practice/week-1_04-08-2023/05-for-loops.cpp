#include<iostream>
using namespace std;


//Explain usage of for loops by printing the even/odd numbers upto a given number
int main(){
    int num1,num2;
    cout<<"Enter the numbers from which and upto which generate the list of even numbers: "<<endl;
    cin>>num1>>num2;
    cout<<endl;
    for(int i=num1;i<=num2;++i){
        if(i%2==0)
        cout<<i<<endl;
    }

    return 0;
}