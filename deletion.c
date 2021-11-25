#include<stdio.h>
void display(int* arr,int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int delete(int* arr,int size,int index){ 
       for(int i=index;i<size-1;i++){
           arr[i]=arr[i+1];
       }
}

int main(){
     int arr[100]={1,4,6,5};//unsorted array
     int index=1;
     int size=4;
     display(arr,size);
    delete(arr,size,2);
    size-=1;
    display(arr,size);
}
