#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream onFile; // creating a object of class ofstream

    onFile.open("file.txt");

    onFile << "Printed the file"; // this will write to the file

    return 0;
}