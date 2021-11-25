#include<iostream>
using namespace std;
int linearSearch(int* arr,int size,int element){
    
    for(int i=0;i<size;i++){
        if(*(arr+i)==element){
            cout<<"element found at index "<<i<<endl;
            goto end;
            break;
            return 1;
        }
    }
    cout<<"Element not found"<<endl;
    end:
    return 0;
}

int binarySearch(int* arr,int size,int element){
    int low=0,high=size-1,mid;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==element){
            cout<<"Element found at index "<<mid<<endl;
        }
        if(arr[mid]<element){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
   return 0; 
}

int main(){
    int arr[]={5,6,7,8,0,4};//unsorted array
    int arr1[]={1,2,3,15,17,25,35};//sorted array
    int size=sizeof(arr)/sizeof(int);
    // cout<<size;
    // linearSearch(arr,size,15);
    binarySearch(arr1,size,17);
}