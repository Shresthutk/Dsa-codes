#include<iostream>
#include "myFunc.cpp"
using namespace std;

void merge(int* A,int low,int mid,int high){
    int i,j,k;
    i=low;
    j=mid+1;
    k=low;
    int* B=new int(high-low+1);

    while(i<=mid && j<=high){
        if(A[i]<A[j]){
            B[k]=A[i];
            i++;
            k++;
        }
        else{
            B[k]=A[j];
            j++;
            k++;
        }
    }
    
     while (i <= mid)
    {
        B[k] = A[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        B[k] = A[j];
        k++;
        j++;
    }
    for (int i = low; i <= high; i++)
    {
        A[i] = B[i];
    }
}

void mergeSort(int* A,int low,int high){
    int mid;
    if(low<high){
        mid=(low+high)/2;
        mergeSort(A,low,mid);
        mergeSort(A,mid+1,high);
        merge(A,low,mid,high);
    }
}

int main(){
     int A[] = {9, 1, 4, 14, 4, 15, 6};
    int n = sizeof(A)/sizeof(int);
    display(A,n);
    mergeSort(A,0,6);
    display(A,n);
}