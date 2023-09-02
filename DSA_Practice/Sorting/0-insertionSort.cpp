#include<iostream>
using namespace std;

void insertion_sort(int arr[], int n){

    for(int i=1; i<n; i++){

        int key = arr[i];
        int j = i-1;

        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }


}

int main(){
    int arr[] = {8, 9, 4, -2, 0, -22};
    int n = sizeof(arr)/sizeof(int);

    insertion_sort(arr,n);
    for(int x: arr){
        cout<<x<<" ";
    }
    return 0;
}