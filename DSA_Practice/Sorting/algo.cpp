#include<iostream>
#include<algorithm>

using namespace std;

int main(){

    int arr[] = {2,7,9,4,-1,22};
    int n = sizeof(arr)/sizeof(int);


    sort(begin(arr), end(arr));

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}