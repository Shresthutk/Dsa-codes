#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include<vector>
using namespace std;

bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> m;
        for(auto i:arr){
            m[i]++;
        }
        int currMapSize=m.size();
        unordered_set<int> s;
        for(auto i:m){
            s.insert(i.second);
        }
        int currSetSize=s.size();

        return (currMapSize==currSetSize);
    }

int main()
{
    vector <int> v{1,2,2,1,1,3};
    cout<<uniqueOccurrences(v);
    return 0;
}