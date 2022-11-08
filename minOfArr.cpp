#include<iostream>
using namespace std;

int minOfArr(int *arr,int n){
    if(n==1){
        return arr[0];
    }

    int misa=minOfArr(arr,n-1);//minimum of smaller array
    return min(arr[n-1],misa);
}

int main(){
    int arr[]={15,4,0,-2,18,6};
    int n=sizeof(arr)/sizeof(int);
    cout<<minOfArr(arr,n);
}