// printf 1 to n and n to 1 using backtracking
#include <bits/stdc++.h>
using namespace std;
void print(int i, int n)
{
    static int c = n;
    if (i > n)
        return;
    cout << i << endl;

    print(i + 1, n);
    cout << c << endl;
    c--;
}
int main()
{
    int n;
    cin >> n;
    print(1, n);
    return 0;
}