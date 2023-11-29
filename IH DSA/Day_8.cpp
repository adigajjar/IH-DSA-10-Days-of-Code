#include <iostream>
#include <vector>
#include <unordered_map>
#include <math.h>
using namespace std;

int firstOcc(vector<int> &nums, int target)
{
    int s = 0;
    int e = nums.size() - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (nums[mid] == target)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (nums[mid] > target)
        {
            e = mid - 1;
        }
        else if (nums[mid] < target)
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int lastOcc(vector<int> &nums, int target)
{
    int s = 0;
    int e = nums.size() - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (nums[mid] == target)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (nums[mid] > target)
        {
            e = mid - 1;
        }
        else if (nums[mid] < target)
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
vector<int> searchRange(vector<int> &nums, int target)
{
    vector<int> temp;
    int first = firstOcc(nums, target);
    int last = lastOcc(nums, target);

    temp.push_back(first);
    temp.push_back(last);

    return temp;
}

int main() {
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;

    vector<int> result = searchRange(nums, target);

    cout << "The target range is: [" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}