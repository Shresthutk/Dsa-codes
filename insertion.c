#include<stdio.h>
void display(int* arr,int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int insert(int* arr,int size,int index,int container,int element){
    if(size>=container){
        return -1;
    }
    else{
        for(int i=size-1;i>=index;i--){
            arr[i+1]=arr[i];
        }
        arr[index]=element;
        return 1;
    }
}

int main(){
    int arr[100]={1,4,6,5};//unsorted array
    int container=sizeof(arr)/sizeof(int),size=4;
    int index=1,element=18;
    display(arr,size);
    insert(arr,size,index,container,element);
    size+=1;
    display(arr,size);
}