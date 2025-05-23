// Singly linked list
// Linked Lists support efficient insertion and deletion operations.

// In a singly linked list, each node consists of two parts: data and a pointer to the next node.
// This structure allows nodes to be dynamically linked together, forming a chain-like sequence.
#include<iostream>
using namespace std;

struct Node{ //
    int data;    // Data part of the node
    Node* next;    // Pointer to the next node in the list

    // Constructor to initialize the node with data
    Node(int data){
        this->data=data;
        this->next=nullptr;
    }
};

int main(){

}