#include<iostream>
using namespace std;
void rev_insertion_sort(int arr[],int n){
    
    for(int i=1;i<n;i++){

        int key = arr[i];
        int j = i-1;

        while(j >= 0 && arr[j] < key){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }

}

int main(){

    // int arr[] = {1,2,3,4,5,6};
    int arr[] = {8,1,3,-2,0};
    int n = sizeof(arr)/sizeof(int);

    rev_insertion_sort(arr,n);
    for(int x: arr){
        cout<<x<<" ";
    }
    return 0;
}