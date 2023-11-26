#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str="Hello";
    cout<<str;
    // reverse(str.begin(),str.end());
    // cout<<" "<<str;
    str.replace(1,3,"height");
    cout<<""<<str;

    cout<<" "<<str.substr(1,6);
}