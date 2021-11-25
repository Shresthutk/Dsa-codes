#include<iostream>
using namespace std;

bool isSorted(int* arr,int size){
    if(size==1){
        return true;
    }

    bool restArray=isSorted(arr+1,size-1);
    return (arr[0]<arr[1] && restArray);
}

int printDecNo(int n){
    if(n==0){
      return printDecNo(0);
    }
    cout<<n<<" ";
    return printDecNo(n-1);
}

void inc(int n){
    if(n==1){
        cout<<1;
        return;
    }
    inc(n-1);
    cout<<n;
}

int main(){
    //check if an array is sorte
    int arr[]={15,16,17,26};
    int size=sizeof(arr)/sizeof(int);
    // cout<<isSorted(arr,size);

    //print num in decreasing order
    // printDecNo(15);

    //print num in increasing order
    inc(4);
}