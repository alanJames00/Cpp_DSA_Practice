#include<iostream>
using namespace std;

/*
those classes/struct that contains one or more than one 
pointer as their member which will be pointing to tthe 
structure of the same type


A class/struct that points to the class/struct of same type.

e.g in LL, Trees




Self Ref is of two types: single link and multiple link self ref.
*/

// Implementation of self_ref in Class
// self ref. class with single link
class Node{
    public:
    int data;
    Node* next;
};


// Self ref. class with multiple links (Double LL)


int main(){

    Node obj1;
    obj1.next = NULL;
    obj1.data = 1;

    Node obj2;
    obj2.next = NULL;
    obj2.data = 2;

    obj1.next = &obj2;

    cout<<obj1.next<<endl;



}