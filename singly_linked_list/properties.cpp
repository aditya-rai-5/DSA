#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

class List{
    Node* head;
    Node* tail;

    public:
    List(){
        head=tail=NULL;
    }

    void push_front(int data){
        Node* newNode=new Node(data);
        if(head==nullptr){
            head=tail=newNode;
            return;
        }
        newNode->next=head;
        head=newNode;
        return;
    }

    void push_back(int data){
        Node* newNode=new Node(data);
        if(head==nullptr){
            head=tail=newNode;
            return;
        }
        tail->next=newNode;
        tail=newNode;
    }

    void pop_front(){
        if(head==NULL){
            cout<<"list is empty"<<endl;
            return ;
        }
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }

    void pop_back(){
        if(head==nullptr){
            cout<<"list is empty."<<endl;
            return;
        }
        Node* temp=head;
        while(temp->next->next!=nullptr){
            temp=temp->next;
        }
        temp->next=nullptr;
        return;
    }

    void insert(int data,int pos){
        if(pos<0) return;
        if(pos==0) push_front(data);
        Node* temp=head;
        int i=0;
        Node* newNode=new Node(data);
        while(i!=pos-1){
            if(temp==NULL){
                cout<<"invalid position"<<endl;
                return;
            }
            i++;
            temp=temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;
    }

    void search(int element){
        if(head==NULL){
            cout<<element<< " not found."<<endl;
            return;
        }
        Node* temp=head;
        int i=1;
        while(temp!=NULL){
            if(temp->data==element){
                cout<<element<<" Found at position: "<<i<<endl;
                return;
            }
            i++;
            temp=temp->next;
        }
        cout<<element<<" not found."<<endl;
    }

    void print_list(){
        Node* temp=head;
        while (temp!=nullptr)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

int main(){
    List l1;
    l1.push_front(1);
    l1.push_front(2);
    l1.push_front(3);
    l1.push_front(4);
    l1.push_back(5);
    l1.print_list();
    // l1.pop_front();
    // l1.print_list();
    // l1.pop_back();
    // l1.print_list();
    l1.insert(10,0);
    l1.print_list();
    l1.search(5);

    return 0;
}