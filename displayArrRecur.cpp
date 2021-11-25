#include<iostream>
using namespace std;

//display array using recursion
void display(int* arr,int size){
    if(size==0){
        return;
    }
    cout<<arr[0]<<" ";
    display(arr+1,size-1);
}

//display reverse using recursion
void displayReverse(int* arr,int size){
    if(size==0){
        return;
    }
    displayReverse(arr+1,size-1);
    cout<<arr[0]<<" ";
}

int main(){
    int arr[]={1,2,15,6};
    int size=sizeof(arr)/sizeof(int);
    display(arr,size);
    cout<<endl;
    displayReverse(arr,size);
}