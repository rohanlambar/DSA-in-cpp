#include <bits/stdc++.h>
using namespace std;
bool isPrefix(string target, string prefix)
{
    if (target.length() < prefix.length())
        return false;
    int n = prefix.length();
    for (int i = 0; i < n; i++)
    {
        if (prefix[i] != target[i])
            return false;
    }
    return true;
}
string cutPrefix(string target, string prefix)
{
    int n = prefix.length();
    string result = "";

    for (int i = n; i < target.size(); i++)
    {
        result += target[i];
    }
    return result;
}

bool canConstruct(string target, vector<string> &wordBank, unordered_map<string, bool> &mpp)
{
    if (mpp.find(target) != mpp.end())
        return mpp[target];
    if (target == "")
        return true;
    for (int i = 0; i < wordBank.size(); i++)
    {
        if (isPrefix(target, wordBank[i]) == true)
        {
            string suffix = cutPrefix(target, wordBank[i]);
            if (canConstruct(suffix, wordBank, mpp) == true)
            {
                mpp[target] = true;
                return true;
            }
        }
    }
    mpp[target] = false;
    return false;
}

int main()
{
    string target = "skateboard";
    vector<string> wordBank = {"bo", "rd", "ate", "t", "ska", "sk", "boar"};
    unordered_map<string, bool> mpp;
    bool result = canConstruct(target, wordBank, mpp);
    cout << " result " << result << endl;
    return 0;
}