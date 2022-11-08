//Remove duplicates from sorted array
#include<iostream>
#include"myFunc.cpp"
using namespace std;
int main(){
   int arr[]={1,3,3,5,5,71,71};
   int arrSize=sizeof(arr)/sizeof(int);
   int res=1;
   for(int i=1;i<arrSize;i++){
      if(arr[i]!=arr[res-1]){
         arr[res]=arr[i];
         res++;
      }
   } 
   arrSize=res;
   display(arr,arrSize);
}