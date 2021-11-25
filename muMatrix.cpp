//here we will implement a program that will give the product of two matrices
#include<iostream>
using namespace std;\
int main(){
    int n,m,l;
    cin>>n>>m>>l;
    int arr1[n][m];
    int arr2[m][l];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        cin>>arr1[i][j];
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<l;j++)
        cin>>arr2[i][j];
    }

    for(int i=0;i<n;i++){
        for(int j=i;j<l;l++){
            for(int k=0;k<l;k++){

            }
        }
    }


}