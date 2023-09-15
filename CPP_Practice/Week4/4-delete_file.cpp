#include<iostream>
#include<fstream>

using namespace std;
int main(){
   int val =  remove("newFile.txt"); // Remove or delete the given file
    //removes return 0 on success. Else error
    
    if(val==0){
        cout<<"File Deleted Successfully"<<endl;
    }
    else{
        cout<<"File Not Deleted: Error";
    }
    return 0;
}