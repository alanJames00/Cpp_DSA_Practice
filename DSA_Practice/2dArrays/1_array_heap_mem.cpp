#include<iostream>
using namespace std;


// Creating a array in heap OR dynamic array

int main(){

    int n;
    cin >> n;

    int** arr = new int*[n];

    // creating
    for(int i=0;i<n;i++){
        arr[i] = new int[n];
    }

    // input
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    // output
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}