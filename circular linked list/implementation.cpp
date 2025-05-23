#include<iostream>
using namespace std;

// Representation of a Circular Singly Linked List

struct Node{
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=nullptr;
    }
};

// Example of Creating a Circular Linked List

