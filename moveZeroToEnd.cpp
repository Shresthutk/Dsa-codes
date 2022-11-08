//move zero to the end  
#include<iostream>
#include "myFunc.cpp"
using namespace std;

void removeZero(int* arr,int size){
   int count=0;
   for(int i=0;i<size;i++){
      if(arr[i]!=0){
         swap(arr[i],arr[count]);
         count++;
      }
   }
}

int main(){
   int arr[]={15,0,0,2,3,0,4,0};
   int arrSize=sizeof(arr)/sizeof(int);
   removeZero(arr,arrSize);
   display(arr,arrSize);
}
