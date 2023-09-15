#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,1,7,8,0};
    int n = sizeof(arr)/sizeof(int);

    //UFO Search algo

    for(int i=0;i<n;i++)
    {
        int temp;
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }


    for(int x: arr){
        cout<<x<<" ";
    }

}