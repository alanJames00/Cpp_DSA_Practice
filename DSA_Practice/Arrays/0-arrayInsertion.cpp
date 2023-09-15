#include<iostream>
using namespace std;
int main(){
    int arr[10] = {2,3,4,5,6};
    int n = 5;

    // //Insert at starting

    // for(int i=n;i>0;--i){
    //     arr[i] = arr[i-1];
    // }
    // n++;

    //Insert at given index
    int insertAt = 2;

    for(int i=n;i>insertAt;--i){
        arr[i] = arr[i-1]; 
    }

    arr[insertAt] = 225;
    n++;
    //Print array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


}