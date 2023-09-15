#include<iostream>
using namespace std;
//Print two following patterns
// 1 2 3
// 1 2 3
// 1 2 3
// Given the number of rows and coloumns

//Then do it in reverse order


int main(){
    int row;
    int col;
    cout<<"enter the number of rows and columns";
    cin>>row>>col;

    for(int i=0;i<row;i++){
        for(int j=1;j<=col;j++){
            cout<<j<<" ";
        }cout<<endl;
    }
    cout<<"Reverse"<<endl;

    for(int i=0;i<row;i++){
        for(int j=1;j<=col;j++){
            cout<<(col-j+1)<<" ";
        }
        cout<<endl;
    }


    return 0;
}