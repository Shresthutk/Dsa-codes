#include<iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}
void display(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int length(int* arr){
    return (sizeof(arr)/sizeof(int));
}
int max(int a,int b){
    return (a>b)?a:b;
}

void reverse(int* arr,int low,int high){
    while(low<high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}