#include<iostream>
using namespace std;

//Time complexity of binary search algo in Sorted array space


int binarySearch(int *arr, int n, int key){
    int s = 0;
    int e = n-1;

    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            s = mid + 1;
        }  
        else{
            e = mid - 1; 
        }
    }
    return -1;
}


int main(){
    int arr[] = {1,56,448,496,896,7777};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cout<<"Enter the element to search\n";
    cin >> key;

    int i = binarySearch(arr,n,key);
    if(i==-1){
        cout<<"Element "<<key<<" not found";
    }
    else{
        cout<<"Element "<<key<<" found at index "<<i;
    }

    return 0;
}