#include<iostream>
using namespace std;
class myArr{
    int total_size;
    int used_size;
    int* arr;
    public:
       myArr(int tSize,int uSize){
           total_size=tSize;
           used_size=uSize;
           arr=new int(tSize);
       }
        void setData(){
            for(int i=0;i<used_size;i++){
                cout<<"Enter the value of index "<<i<<" : ";
                cin>>arr[i];
            }
        }
        void getData(){
            for(int i=0;i<used_size;i++){
               cout<<arr[i]<<" ";
            }
        }
};

int main(){
    myArr array1(15,4);
    array1.setData();
    array1.getData();
}