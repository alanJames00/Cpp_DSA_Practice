#include<iostream>
#include<string>
using namespace std;
//Modified Binary search algo for strings
int binarySearch(string* arr, int n,string key){
    int s = 0;
    int e = n-1;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return -1;
}



int main(){
    string arr[] = {"apple","boy","cat","danger"};
    int n = 4;
    string key = "boyy";
    cout<<binarySearch(arr,n,key);
}