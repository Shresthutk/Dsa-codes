#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    //used to store unique keys
    unordered_set<int> s;
    s.insert(15);
    s.insert(1);
    s.insert(6);

    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<s.count(1)<<endl;
    s.clear(); //erases everything
    cout<<s.size();

}