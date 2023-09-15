// Freq Table
#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main(){

    int arr[] = {15,15,1,7,7,7};
    int n = sizeof(arr)/sizeof(int);

    map<int, int> freq;
    vector<int> orderVector;

    for(int i=0;i<n;i++){
        if(freq.find(arr[i]) == freq.end()){
            freq[arr[i]] = 1;
            orderVector.push_back(arr[i]);
        }
        else{
            freq[arr[i]]++;
        }
    }

    for(const int& element: orderVector){
        cout<<"element "<<element<<" occurred "<<freq[element]<<" times"<<endl;
    }

}