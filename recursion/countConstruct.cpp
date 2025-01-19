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

int canConstruct(string target, vector<string> &wordBank, unordered_map<string, int> &mpp)
{
    if (mpp.find(target) != mpp.end())
        return mpp[target];
    if (target == "")
        return 1;

    int count = 0;

    for (int i = 0; i < wordBank.size(); i++)
    {
        if (isPrefix(target, wordBank[i]) == true)
        {
            string suffix = cutPrefix(target, wordBank[i]);
            int result = canConstruct(suffix, wordBank, mpp);
            if (result > 0)
                count += result;
            mpp[target] = count;
        }
    }
    mpp[target] = count;
    return count;
}

int main()
{
    string target = "abcdef";
    vector<string> wordBank = {"ab", "abc", "cd", "def", "abcd", "ef", "c"};
    unordered_map<string, int> mpp;
    int result = canConstruct(target, wordBank, mpp);
    cout << " result " << result << endl;
    return 0;
}