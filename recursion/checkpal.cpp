#include <bits/stdc++.h>
#include <string.h>
using namespace std;
bool checkpalidrome(string str, int n, int i)
{
  if (i >= n / 2)
    return true;
  if (str[i] != str[n - 1 - i])
    return false;
  return checkpalidrome(str, n, i + 1);
}
int main()
{
  string str;
  getline(cin, str);
  cout << " \n displaying the string \n";
  cout << str;
  cout << endl;
  int result = checkpalidrome(str, str.length(), 0);
  if (result == 1)
    cout << "TRUE" << endl;
  else
    cout << "FALSE" << endl;
  return 0;
}