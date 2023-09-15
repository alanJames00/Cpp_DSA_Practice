#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    ifstream inFile;
    string str;

    inFile.open("file.txt");

    inFile >> str; // this only reads the file till when whitespaces.
                    // So we will use getline with a loop
    cout<<str;
}