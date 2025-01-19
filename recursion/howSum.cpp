// write a function canSum which take nums vector and target value as input and returns whether element in nums combine to form target value
#include <bits/stdc++.h>
using namespace std;

vector<int> canSum(int target, vector<int> &nums, vector<int> &comb)
{
    if (target == 0)
        return {};
    if (target < 0)
        return {-1};
    for (int i = 0; i < nums.size(); i++)
    {
        auto res = canSum(target - nums[i], nums, comb);
        if (res[0] != -1)
        {
            comb.push_back(nums[i]);
            return comb;
        }
    }

    return {-1};
}
int main()
{
    vector<int> nums = {1};
    int target = 7;
    vector<int> temp;
    // vector<int> memo(target + 1, -1);
    vector<int> result = canSum(7, nums, temp);
    for (auto el : nums)
        cout << el << " ";
    cout << endl;
    return 0;
}~~