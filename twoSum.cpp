//if input is sorted
//using two pointer method
#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
vector<int> twoSum(vector<int> &nums, int target)
{
    sort(nums.begin(), nums.end());
    int i = 0, j = nums.size() - 1;
    while (nums[i] + nums[j] != target)
    {
        if ((nums[i] + nums[j]) < target)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return {i, j};
}

//if not sorted

vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> m;
    for (int i = 0; i < nums.size(); i++)
    {
        int compliment = target - nums[i];
        if (m.count(compliment))
        {
            return {m[compliment], i};
        }
        m[nums[i]] = i;
    }
    return {};
}
int main()
{
    vector<int> inp{{2, 7, 11, 15}};
    vector<int> ans = twoSum(inp, 18);
    for (auto el : ans)
    {
        cout << el << " ";
    }
};