#include<iostream>
using namespace std;
int r=3,c=3;

void transpose(int arr[3][3]){
    //diagonal elements don't change
    for(int i=0;i<2;i++){
        for(int j=i+1;j<3;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
}

void print(int arr[3][3]){
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
 int arr[3][3]={{1,2,3},
                {4,5,6},
                {7,8,9}};

                //1 4 7
                //2 5 8
                //3 6 9

print(arr);
transpose(arr);
cout<<endl;
print(arr);

}
