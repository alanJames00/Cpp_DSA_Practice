#include<iostream>
using namespace std;

int add(int a, int b){

    return (a+b);
}

int add(float a, float b){

    return(a+b);
}

int main(){
    int x = add(4,5);
    float y = add(4.5f,1.5f);

    cout<<x<<endl<<y;

    return 0;
}