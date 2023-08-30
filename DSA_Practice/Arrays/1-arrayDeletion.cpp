#include<iostream>
using namespace std;


int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);

    //delete from start
    for(int i=0;i<n-1;i++){
        arr[i] = arr[i+1];
    }

    //delete at a given index, say t = 2; 
    int t=2;
    for(int i=t;i<n-1;i++){
        arr[i] = arr[i+1];
    }


    //Print the resulting array
    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}