#include <iostream>
using namespace std;

int firstOccur(int *arr, int size, int key, int index)
{
    if (index == size)
    {
        return -1;
    }
    if (arr[index] == key)
    {
        return index;
    }
    else
    {
        return firstOccur(arr, size, key, index + 1);
    }
}

int LastOccur(int *arr, int size, int key, int index)
{
    if (index == size)
    {
        return -1;
    }
    int restArr=LastOccur(arr, size, key,index+1);
    if(restArr!=-1){
        return restArr;
    }
    else if(arr[index]==key){
        return index;
    }
    else{
        return -1;
    }
}

int main()
{
    int arr[] = {15, 4, 1, 7, 5, 1, 7, 8};
    int size = sizeof(arr) / sizeof(int);
    cout << LastOccur(arr, size, 1, 0) << endl;
    cout << firstOccur(arr, size, 1, 0);
}