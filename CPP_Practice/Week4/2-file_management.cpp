#include<iostream>
#include<string>
#include<fstream>

using namespace std;
int main(){
    ifstream inFile;
    string str;


    inFile.open("file.txt");

    while(getline(inFile, str)){
        cout<<str;
    }
    return 0;
}