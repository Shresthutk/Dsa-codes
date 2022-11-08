//leader in an array
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void leader(int* arr,int size){
   vector<int> v;
   int currLdr=arr[size-1];
   v.push_back(currLdr);
   for(int i=size-2;i>=0;i--){
      if(currLdr<arr[i]){
         currLdr=arr[i];
         v.push_back(currLdr);
      }
   }
   reverse(v.begin(),v.end());
   for(int i=0;i<v.size();i++){
      cout<<v[i]<<" ";
   }
}
int main(){
   int arr[]={7,10,4,10,6,5,2};
   int size=sizeof(arr)/4;
   leader(arr,size);
}