#include<iostream>
using namespace std;
void bubbleSort(int *arr,int n){

    for(int i=0;i<n;i++){
        int temp;
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

}

int main(){
    int arr[] = {7,8,1,0,-8};
    int n = sizeof(arr)/sizeof(int);

    bubbleSort(arr,n);

    for(int x: arr){
        cout<<x<<" ";
    }

}