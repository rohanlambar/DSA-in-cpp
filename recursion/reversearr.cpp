#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5],i;
    for(i=0;i<5;i++)
    arr[i]=i+1;
    int first=0;
    int last=4;
    for(i=0;i<5;i++)
    cout<<arr[i];
    cout<<endl;
    while(first<last)
    {
        swap(arr[first],arr[last]);
        first++;
        last--;
    }
    for(i=0;i<5;i++)
    cout<<arr[i];
}