#include<iostream>
using namespace std;
int main(){
    int arr1[] = {1,5,10,20,25};
    int n1 = sizeof(arr1)/sizeof(int);
    int i;
    int arr2[] = {2,3,9,19,29};
    int n2 = sizeof(arr2)/sizeof(int);

    int n3 = n1+n2;
    int arr3[n3];

    for(i=0;i<n1;i++){
        arr3[i] = arr1[i];
    }
    
    for(int j=0;j<n2;j++){
        arr3[i] = arr2[j];
        i++;
    }


    //SORTING w bubbleSort

    for(i=0;i<n3;i++){
        int temp;
        for(int j=i+1;j<n3;j++){
            if(arr3[i]>arr3[j]){
                temp = arr3[i];
                arr3[i] = arr3[j];
                arr3[j] = temp;
            }
        }
    }


    for(int x: arr3){
        cout<<x<<" ";
    }

    return 0;
}