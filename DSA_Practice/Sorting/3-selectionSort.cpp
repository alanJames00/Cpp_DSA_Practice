#include<iostream>
using namespace std;

void selection_sort(int arr[], int n){

    for(int i=0; i<n-1; i++){
        int min = i;
        for(int j=i+1; j<n; j++){

            if(arr[j] < arr[min]){
                min = j;
            }
        }

        if(min != i){
            swap(arr[min],arr[i]);
        }
    }

}

int main(){
    int arr[] = {7,9,1,2,0,55};
    int n = sizeof(arr)/sizeof(int);
    
    selection_sort(arr,n);

    for(int x: arr){
        cout<<x<<" "; 
    }

    return 0;
}