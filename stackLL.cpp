#include<iostream>
using namespace std;


//stack follows last in first out
//last in means the element will be inserted in the front 

class stack{
    public:
    int data;
    stack* next;

    stack(int val){
        data=val;
        next=NULL;
    }
};

class stackNode{
    public:
    stackNode(){
        stack* head=NULL;
    }
};

void push(stack* &head,int value){

    stack* n=new stack(value);
    n->next=head;
    head=n;

}

void pop(stack* &head){

    if(head==NULL){
        cout<<"Stack already empty"<<endl;
        return;
    }

    stack* toDel = head;
    head=toDel->next;
    delete toDel;
    
    
}

int Top(stack* head){
    if(head==NULL){
        cout<<"No elements in stack";
    }
    return head->data;
}

bool empty(stack* head){
    if(head==NULL){
        return true;
    }
    else
    return false;
}


int main(){
    stack* head=NULL;
    push(head,15);
    push(head,1);
    push(head,0);
    push(head,6);

    cout<<empty(head)<<endl;
    cout<<Top(head)<<endl;

    pop(head);
    pop(head);
    pop(head);
    pop(head);
    pop(head);

    cout<<empty(head)<<endl;

}