#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int maxSubArray(vector<int> &nums)
{
    //kaden's algorithm

    int currsum = 0;
    int maxsum = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        currsum += nums[i];
        if (currsum > maxsum)
        {
            maxsum = currsum;
        }
        if (currsum < 0)
        {
            currsum = 0;
        }
        if (maxsum == 0)
        {
            //return max of array
            maxsum = *max_element(nums.begin(), nums.end());
        }
    }
    return maxsum;
}

int main(){
    vector <int> v;
    v={15,-5,-2,6,4,-1};
    cout<<maxSubArray(v);
}