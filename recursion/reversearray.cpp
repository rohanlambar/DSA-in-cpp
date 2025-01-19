#include <bits/stdc++.h>
using namespace std;
int arr[6];
void reverse(int f)
{
    if (f >= 3)
        return;
    reverse(f + 1);
    swap(arr[f], arr[5 - f]);
}
int main()
{
    int i;
    for (i = 0; i < 6; i++)
        arr[i] = i + 1;
    for (i = 0; i < 6; i++)
        cout << arr[i] << " ";
    cout << endl;
    reverse(0);
    for (i = 0; i < 6; i++)
        cout << arr[i] << " ";
}