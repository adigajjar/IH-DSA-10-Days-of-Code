#include <iostream>
#include <vector>
#include <unordered_map>
#include <math.h>
using namespace std;

vector<int> shuffle(vector<int> &nums, int n)
{

    vector<int> temp;
    vector<int> temp2;

    for (int i = 0; i < n; i++)
    {
        temp.push_back(nums[i]);
    }
    for (int i = 0; i < n; i++)
    {
        temp2.push_back(temp[i]);
        temp2.push_back(nums[i + n]);
    }

    return temp2;
}

int main() {
    vector<int> nums = {2, 5, 1, 3, 4, 7};
    int n = 3;

    vector<int> result = shuffle(nums, n);

    cout << "The shuffled vector is: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
