#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};
void insertAtTail(node* &head,int val){
   
    node* n=new node(val);
     if(head==NULL){
       n->next=n;
       head=n;
       return;
    }

    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
}

void display(node* head){
    node* temp=head;
   do{
       cout<<temp->data<<" ";
       temp=temp->next;
   }
   while(temp!=head);
}
int main(){
    node* head=NULL;
    insertAtTail(head,15);
    insertAtTail(head,5);
    insertAtTail(head,125);
    insertAtTail(head,156);
    display(head);

    return 0;
}