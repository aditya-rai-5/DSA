#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;

    Node (int new_data){
        this->data=new_data;
        this->next=nullptr;
    }
};

int count_occurence(Node* head, int key){
    if(head==nullptr){
        return 0;
    }
    int count=0;
    while(head){
        if(head->data==key){
            count+=1;
        }
        head=head->next;
    }
    return count;
}

int main(){
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(1);
    head->next->next->next = new Node(2);
    head->next->next->next->next = new Node(1);

    int key = 1;
    cout << count_occurence(head, key);
    return 0;
}