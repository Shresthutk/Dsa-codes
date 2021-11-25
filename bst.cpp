#include<iostream>
using namespace std;

class node{
    public:
    node* left;
    node* right;
    int data;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

node* insertBST(node* root,int val){
    if(root==NULL){
        return new node(val);
    }

    if(root->data>val){
        root->left=insertBST(root->left,val);
    }
    else{
        root->right=insertBST(root->right,val);
    }
    return root;
}

void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

node* search(node* root,int key){
    if(root==NULL){
        return NULL;
    }
   else if(root->data==key){
        return root;
    }
   else if(root->data>key){
        return search(root->left,key);
    }
    return search(root->left,key);
}

node* inOrderPredecessor(node* root){
    root=root->left;
    while(root->right!=NULL){
        root=root->right;
    }
    return root;
}

node* deletion(node* root,int val){
    node* iPre;
    if(root==NULL){
        return NULL;
    }
    if(root->left==NULL&&root->right==NULL){
        free(root);
        return NULL;
    }
    if(root->data>val){
        root->left=deletion(root->left,val);
    }
    else if(root->data<val){
        root->right=deletion(root->right,val);
    }
    else{
        iPre=inOrderPredecessor(root);
        root->data=iPre->data;
        root->left=deletion(root->left,iPre->data);

    }
    return root;
}
int main(){
    //naive way
    // root=insertBST(root,1);
    // insertBST(root,8);
    // insertBST(root,2);
    // insertBST(root,3);
    // insertBST(root,6);

    int elements[]={2,4,6,1,8,3};
    int elSize=sizeof(elements)/sizeof(int);
    node* root=NULL;
    root=insertBST(root,elements[0]);
    for(int i=1;i<elSize;i++){
        insertBST(root,elements[i]);
    }

    //inorder of bst is always sorted
    inorder(root);

    // if(search(root,2)==NULL){
    //     cout<<"\nroot dosent exists";
    // }
    // else{
    //     cout<<"\nroot exists";
    // }
    cout<<endl;
    deletion(root,4);
    inorder(root);
}