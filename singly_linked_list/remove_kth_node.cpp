#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int new_data){
        this->data=new_data;
        this->next=nullptr;
    }
};

Node* remove_kth_ele(Node* head, int k){
    if (head == nullptr || k <= 0) 
        return head;
    
    int n=0;
    Node* curr=head;
    Node* prev=nullptr;
    while (curr!=nullptr)
    {
        n++;
        if(n%k==0){
            if(prev!=nullptr){
                prev->next=curr->next;
            }
            else{
                head=curr->next;
            }
        }
        else{
            prev=curr;
        }
        curr=curr->next;
    }
    
    return head;
}

void printList(Node* head){
    while(head!=nullptr){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

int main(){
    Node* head=new Node(32);
    head->next=new Node(54);
    head->next->next= new Node(65);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);

    printList(head);

    int k=2;

    head=remove_kth_ele(head,k);

    printList(head);

    return 0;
}