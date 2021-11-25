//minimum element from a array
#include <iostream>
using namespace std;
int main()
{
    int temp;
    int arr[] = {15, 19, 14, 2, 1, 8};
    int size = sizeof(arr) / sizeof(int);
    for (int i = 0; i < size; i++)
    {
        temp = arr[i];
        if (arr[i + 1] > temp)
        {
            i++;
        }
        else
        {
            temp = arr[i + 1];
        }
    }
    cout << temp;
}