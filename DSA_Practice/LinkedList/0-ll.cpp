#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;

    //Constructor method
    Node(int val){
        data = val;
        next = NULL;

    }
};

void insertAtTail(Node* &head, int val){
    Node* n = new Node(val);

    Node* temp = head;
    while(temp->next != NULL){
        temp = temp -> next;
    }

    temp->next = n;
}


int main(){
    Node* head = NULL;

    return 0;
}