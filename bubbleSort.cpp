#include <iostream>
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
/*
So what happens here is in the first pass we only need to swap till before size-1 beacause
the biggest element already gets sorted
the largest no gets to its position first then the second largest
so as we go down doing the passes we reduce the no of loops
*/
int bubbleSort(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        cout<<"running pass "<<i+1<<endl;
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (*(arr + j) > *(arr + j + 1))
            {
                swap(*(arr + j), *(arr + j + 1));
            }
        }
    }
    return 1;
}
int main()
{
    int arr[] = {22, 5, 2, 31, 8, 12};
    int size = sizeof(arr) / sizeof(int);
    display(arr, size);
    bubbleSort(arr, size);
    display(arr, size);
}