#include<iostream>
using namespace std;

int maxOfArr(int *arr,int n){

   if(n==1){
       return arr[0];
   } int misa=maxOfArr(arr,n-1);//max in smaller array
   return max(arr[n-1],misa ); 
}

int main(){
    int arr[]={10,15,5,4};
    int n=sizeof(arr)/sizeof(int);
    cout<<maxOfArr(arr,n);
}