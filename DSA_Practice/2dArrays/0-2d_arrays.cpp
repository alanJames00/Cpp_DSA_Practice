#include<iostream>
using namespace std;
int main(){
    // Initialize the 2D array
    int arr[3][4];

    //  take user input
    for(int row=0;row<3;row++){

        for(int col=0;col<4;col++){
            cin>>arr[row][col];
        }
    }
    
    // Print 
    for(int row = 0;row<3;row++){

        for(int col=0;col<4;col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }


    return 0;
