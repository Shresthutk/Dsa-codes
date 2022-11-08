#include<iostream>
using namespace std;
//This function returns the number of trailing zeros of the factorial of n
//e.g. facotrial of 10 =3628800
//therefore number of trailing zeros=2
int zero(int n){
    int res=0;
    for(int i=5;i<=n;i=i*5){
        res=res+n/i;
    }
    return res;
}
int main(){
    cout<<zero(5);
}