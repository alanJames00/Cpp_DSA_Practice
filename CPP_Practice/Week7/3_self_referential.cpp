#include<iostream>
using namespace std;

/*
those classes/struct that contains one or more than one 
pointer as their member which will be pointing to tthe 
structure of the same type


A class/struct that points to the class/struct of same type.

e.g in LL, Trees
*/

// Implementation of self_ref in Class
class Node{
    int data;
    Node* next;
};

