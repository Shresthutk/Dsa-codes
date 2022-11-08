//rotate an array to the left by d times
#include<iostream>
#include"myFunc.cpp"
using namespace std;

void rotateLeft(int* arr,int size,int d){
   reverse(arr,0,d-1);
   reverse(arr,d,size-1);
   reverse(arr,0,size-1);
}

int main(){
   int arr[]={1,4,16,7,4};
   int size=sizeof(arr)/sizeof(int);
   display(arr,size);
   rotateLeft(arr,size,1);
   display(arr,size);
}