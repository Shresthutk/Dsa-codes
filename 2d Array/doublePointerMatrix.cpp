#include <iostream>
using namespace std;

void print(int **arr, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout<<endl;
    }
}

int main()
{
    cout << "2D matrix";
    int **arr;
    int r=3;int c=2;
    arr = new int *[r];
    for (int i = 0; i < r; i++)
    {
        arr[i] = new int[c];
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }
   

    print(arr, 3, 2);
}