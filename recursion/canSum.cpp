// write a function canSum which take nums vector and target value as input and returns whether element in nums combine to form target value
#include <bits/stdc++.h>
using namespace std;

bool canSum(int target, vector<int> &nums,vector<int> &memo)
{   if(memo[target]!=-1) return memo[target];
    if (target == 0)
        return true;
    if (target < 0)
        return false;
    for (int i = 0; i < nums.size(); i++)
    {
        if (canSum(target - nums[i], nums,memo) == true){
            memo[target] = 1;
            return true;

        }
            
    }
    memo[target] = 0;
    return false;
}
int main()
{
    vector<int> nums = {3};
    int target = 7;
    vector<int> temp;
    vector<int> memo(target + 1, -1);
    bool result = canSum(7, nums,memo);
    cout << result << endl;
}