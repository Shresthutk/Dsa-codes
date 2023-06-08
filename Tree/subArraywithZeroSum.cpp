#include<iostream>
#include<vector>
#include <unordered_set>
using namespace std;

bool isZero(vector <int> v){
    unordered_set <int> s;
    int sum=0  ;
    for(auto el:v){
        sum+=el;
        if(s.count(sum)){
            return true;
        }
        if(sum==0){
            return true;
        }
        s.insert(sum);
    }
    return false;
}


int main(){
    //-1 -- 3 -- 0
    vector<int> v{-1,4,-3,5,1};
    cout<<isZero(v);
}