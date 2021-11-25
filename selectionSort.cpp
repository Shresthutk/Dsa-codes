//Selection Sort
//minimum number of swaps
#include<iostream>
#include "myFunc.cpp"
using namespace std;
void selectionSort(int* arr,int size){
     for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[i]){
                swap(arr[i],arr[j]);
            }
        }
    }
}
int main(){
    int arr[]={15,6,4,7,3,19};
    int size=sizeof(arr)/sizeof(int);
    selectionSort(arr,size);
    display(arr,size);
}