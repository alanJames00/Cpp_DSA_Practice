#include<iostream>
using namespace std;
//Simple unoptimizedd easy to implement handy bubble sort
// an optimized version of it is also available
void bubble_sort(int arr[], int n){

    for(int i=0;i<n;i++){

        for(int j=i+1 ; j<n;j++){
            if(arr[i] > arr[j]){
                swap(arr[i],arr[j]);
            }

        }
    }

}

int main(){
    int arr[] = {8, 2, 6, 7, 55, -2};
    int n = sizeof(arr)/sizeof(int);

    bubble_sort(arr, n);

    for(int x: arr){
        cout<<x<<" ";
    }
    return 0;
}