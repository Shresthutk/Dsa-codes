#include<iostream>
#include<vector>
#include<algorithm>
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

class linkedList{
    public:
    node* head;
    linkedList(){
        this->head=NULL;
    }
};

void insertAtTail(node* &head,int val){
    node* n=new node(val);
    node* temp=head;
    if (head==NULL){
        head=n;
        return;
    }
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next=n;
}

void display(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

void reverseLL(node* &head){
    vector<int> v;
    node* temp=head;
    while(temp!=NULL){
        v.push_back(temp->data);
        temp=temp->next;
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    // cout<<v.size();
}

int main(){
    node* head=NULL;
    insertAtTail(head,15);
    insertAtTail(head,12);
    insertAtTail(head,1);
    insertAtTail(head,10);

    display(head);
    reverseLL(head);
    display(head);
    
}