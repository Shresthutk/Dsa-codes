#include<iostream>
using namespace std;

int maxOfArray(int* arr,int size){

    if(size==0){
        return -1;
    }
    int max;
    max=maxOfArray(arr+1,size-1);
    if(max>arr[0]){
        return max;
    }
    else{
        return arr[0];
    }
}

int main(){
    int arr[]={15,6,2,4,85};
    int size=sizeof(arr)/sizeof(int);
    cout<<maxOfArray(arr,size);
}