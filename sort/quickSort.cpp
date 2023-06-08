#include<iostream>
#include "myFunc.cpp"
using namespace std;

void quickSort(int* A,int low,int high){
    int index;
    if(low<high){
        index= partition(A,low,high);
        quickSort(A,low,index-1);
        quickSort(A,index+1,high);
    }
}

int partition(int* A,int low,int high){ //move all the elements greater than pivot to the right  side and elements that are less to the left side
    int pivot=A[low];
    int i=low+1;
    int j=high;

    do{
        while(A[i]<=pivot){
            i++;
        }
        while(A[j]>pivot){
            j--;
        }
        if(i<j){
            swap(A[i],A[j]);
        }
    }while(i<j);

    swap(A[low],A[j]);
    return j;
}


int main(){
     int A[] = {9, 4, 4, 8, 7, 5, 6};
     int size=sizeof(A)/sizeof(int);
     int low=0;
     int high=size-1;
     display(A,size);
     quickSort(A,low,high);
     display(A,size);
}