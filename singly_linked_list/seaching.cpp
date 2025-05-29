// Search an element in a Linked List (Iterative and Recursive)

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=nullptr;
    }
};

// (Iterative Approach) – O(N) Time and O(1) Space

bool search_key_1(Node* head, int key){
    Node* curr=head;

    while(curr!=NULL){
        if(curr->data==key){
            return true;
        }
        curr=curr->next;
    }
    return false;
}

// (Recursive Approach) – O(N) Time and O(N) Space

bool search_key_2(Node* head, int key){
    if(head==NULL){
        return false;
    }
    if(head->data==key){
        return true;

    }
    return search_key_2(head->next, key);
}

int main(){
    Node* head = new Node(14);
    head->next = new Node(21);
    head->next->next = new Node(13);
    head->next->next->next = new Node(30);
    head->next->next->next->next = new Node(10);

    int key = 14;
  
    if (search_key_1(head, key))
		printf("Yes");
    else
        printf("No");

    if (search_key_2(head, key))
		printf("Yes");
    else
        printf("No");

    return 0;
}