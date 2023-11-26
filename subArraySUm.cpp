#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std; 
 
int subarraySum(vector<int>& nums, int k) {
        unordered_map <int,int> m;
        int sum=0;
        int count=0;
        vector <int> v;
        for(auto el:nums){
          sum+=el;
          if(sum==k){
            v.push_back(0);
            v.push_back(1);
          }
          if(m.count(sum-k)){
            count+=m[sum-k];
          }
          m[sum]++;
        }
        return count;
    }

    int main(){
        vector <int> v{3,2,4};
        int target=6;
        cout<<subarraySum(v,target);
    }