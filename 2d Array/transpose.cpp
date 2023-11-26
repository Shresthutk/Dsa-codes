//In this program we will take the input of a square matrix and find its transpose#include <iostream>
#include<iostream>
using namespace std;
int main()
{
    //transpose of an array
    //1 2 3     1 4 7
    //4 5 6---> 2 5 8
    //7 8 9     3 6 9
    //row becomes column and column becomes row

    int n, m;
    cin >> n >> m;
    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < m; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << arr[i][j] << " ";
            cout << endl;
    }
}