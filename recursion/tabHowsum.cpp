// write a function canSum which take nums vector and target value as input and returns whether element in nums combine to form target value
#include <bits/stdc++.h>
using namespace std;

vector<int> howSum(int target, vector<int> &nums)
{
    vector<vector<int>> dp(target + 1, vector<int>(0));
    for (int i = 0; i <= target; i++)
    {
        if (i == 0 || !dp[i].empty())
        {
            for (int j = 0; j < nums.size(); j++)
            {
                if (i + nums[j] <= target)
                {
                    vector<int> temp = dp[i];
                    temp.push_back(nums[j]);
                    dp[i] = temp;
                }
            }
        }
    }
    return dp[target];
}
int main()
{
    vector<int> nums = {3, 4, 5};
    int target = 7;
    vector<int> temp;
    // vector<int> memo(target + 1, -1);
    vector<int> result = howSum(7, nums);
    for (auto el : result)
        cout << el << " ";
    cout << endl;
    return 0;
}
