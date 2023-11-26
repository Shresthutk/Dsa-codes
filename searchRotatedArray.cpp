#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
    int binarySearch(vector<int> nums, int target, int low, int high)
    {
        while (low < high)
        {
            int mid = (low + high) / 2;
            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] > target)
            {
                high = mid;
            }
            else
            {
                low = mid;
            }
        }
        return -1;
    };
    int pivotSearch(vector<int> nums, int low, int high)
    {
        if (low > high)
        {
            return -1;
        }
        if (low == high)
        {
            return low;
        }
        int mid = (low+high)/2;
        if ((mid < high) && nums[mid] > nums[mid + 1])
        {
            return mid;
        }
        if ((mid > low) && nums[mid - 1] > nums[mid])
        {
            return mid - 1;
        }
        if (nums[mid] > high)
        {
            return pivotSearch(nums, mid, high);
        }
        return pivotSearch(nums, low, mid);
    }
    int search(vector<int> &nums, int target)
    {
        int pivot = pivotSearch(nums, 0, nums.size() - 1);
        if (pivot == -1)
        {
            return binarySearch(nums, target, 0, nums.size() - 1);
        }
        if (nums[pivot] == target)
        {
            return pivot;
        }
        if (nums[0] >= target)
        {
            return binarySearch(nums,target, 0, pivot-1);
        }
        return binarySearch(nums, target,pivot+1, nums.size() - 1);
    }

int main(){
    vector<int> v{4,5,6,7,0,1,2};
    cout<<pivotSearch(v,0,6);
    cout<<binarySearch(v,6,0,3);
}